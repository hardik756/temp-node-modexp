#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void graphprint(std::vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            std::cout<<x<<" ";
        }
        std::cout<<std::endl;
    }
}

void bfs(std::vector<int>adj[],int v,int s){
    bool visited[v+1];
    std::queue<int>q;
    for(int i=0;i<v+1;i++){
        visited[i]=false;
    }
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        std::cout<<q.front()<<" ";
        q.pop();
        for(auto x:adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }            
        }
    }

}

void bfs2(std::vector<int>adj[],int s,bool visited[]){
//the upper code works good if all the nodes are connected to each other and if the source(s)is known
//this code works also in case of discontinuity
    std::queue<int>q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        std::cout<<u<<" ";
        for(auto x:adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

void dfs1(std::vector<int>adj[],int s,bool visited[]){
    visited[s]=true;
    std::cout<<s<<" ";
    for(int u:adj[s]){
        if(visited[u]==false){
            dfs1(adj,u,visited);
        }
    }
}
void dfsrec(std::vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            dfs1(adj,i,visited);
        }
    }    
}

int bfsdis(std::vector<int>adj[],int v){
    int count=0;
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            bfs2(adj,i,visited);
            count++;
        }
    }
    return count;
}

void shortestpath(std::vector<int>adj[],int s,int v){
    int arr[v]={INT_MAX};
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    arr[s]=0;
    visited[s]=true;
    std::queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto x:adj[v]){
            if(visited[x]==false){
                arr[x]=arr[u]+1;
                visited[x]=true;
                q.push(x);
            }
        }
    }
    for(int i=0;i<v;i++){
        std::cout<<arr[i]<<" ";
    }
    
}

bool cycledetection2(std::vector<int>adj[],int s,int parent,bool visited[]){
    visited[s]=true;
    for(auto x:adj[s]){
        if(visited[x]==false){
            if(cycledetection2(adj,x,s,visited)==true){
                return true;
            }
        }
        else if(x!=parent){
            return true;
        }
    }
    return false;
}

bool cycledetection(std::vector<int>adj[],int v){
    bool visited[v]={false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(cycledetection2(adj,i,-1,visited)==true){
                return true;
            }
        }
    }
    return false;
}


int main(){

    std::vector<int>adj[5];
    // addedge(adj,0,1);
    // addedge(adj,0,2);
    // addedge(adj,0,4);
    // addedge(adj,1,3);
    // addedge(adj,2,3);
    // addedge(adj,2,4);
    // addedge(adj,3,5);
    // addedge(adj,4,5);
    // bfs(adj,4,0);
    // graphprint(adj,4);   
    //dfsrec(adj,4,0);
    //shortestpath(adj,0,6);
    addedge(adj,0,1);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,1,4);
    std::cout<<cycledetection(adj,5);
    std::cin.get();
}