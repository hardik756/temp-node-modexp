#include<iostream>
#include<queue>
#include<vector>
#include<stack>

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
}

bool cycledetect2(std::vector<int>adj[],int s,bool visited[],bool recst[]){
    visited[s]=true;
    recst[s]=true;
    for(auto x:adj[s]){
        if(visited[x]==false && cycledetect2(adj,x,visited,recst)){
            return true;
        }
        else if(recst[x]==true){
            return true;
        }
    }
    recst[s]=false;
    return false;
}
bool cycledetect(std::vector<int>adj[],int v){
    bool visited[v]={false};
    bool recst[v]={false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(cycledetect2(adj,i,visited,recst)==true){
                return true;
            }
        }
    }    
    return false;
}

void indegree(std::vector<int>adj[],int arr[],int v){
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            arr[x]++;
        }
    }
}

void topologicalsorting(std::vector<int>adj[],int v,int arr[]){
//topoligal sorting in kahn's algorithm
   std::queue<int>q;
    for(int i=0;i<v;i++){
        if(arr[i]==0){
            q.push(arr[i]);
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        std::cout<<u<<std::endl;
        for(int x:adj[u]){
            arr[x]--;
            if(arr[x]==0){
                q.push(arr[x]);
            }
        }
    }

}

bool cycledetectionkahn(std::vector<int>adj[],int arr[],int v){
    std::queue<int>q;
    for(int i=0;i<v;i++){
        if(arr[i]==0){
            q.push(arr[i]);
        }
    }
    int count;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        std::cout<<u<<std::endl;
        for(int x:adj[u]){
            arr[x]--;
            if(arr[x]==0){
                q.push(arr[x]);
            }
        }
        count++;
    }
    return count!=v;
}

void topologicalsortingdfs(std::vector<int>adj[],bool visited[],int v){
    std::stack<int>s;
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            if(visited[x]==false){
                dfstoposort(x,s,visited,adj);
            }
        }
        while(!s.empty()){
            std::cout<<s.top()<<" ";
            s.pop();
        }
    }
}

void dfstoposort(int u,std::stack<int>&s,bool visited[],std::vector<int>adj[]){
    visited[u]==true;
    for(auto x:adj[u]){
        if(visited[x]==false){
            dfstoposort(x,s,visited,adj);
        }
    }
    s.push(u);
}

int main(){

    std::vector<int>adj[4];
    addedge(adj,0,1);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,3,1);
    std::cout<<cycledetect(adj,4);

    std::cin.get();
}