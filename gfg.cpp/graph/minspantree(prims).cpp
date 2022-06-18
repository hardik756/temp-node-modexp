//prims algo is the greedy approach to solve this kind of problems
#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int minspanningusingmatrixrep(std::vector<int>graph[],int v){
    int key[v],res=0;
    std::fill(key,key+v,INT_MAX);
    key[0]=0;
    bool mset[v]={false};
    for(int count=0;count<v;count++){
        int u=-1;
        for(int i=0;i<v;i++){
            if(!mset[i]&&(u==-1 || key[i]<key[u])){
                u=i;
            }
        }
        mset[u]=true;
        res=res+key[u];
        for(int x=0;x<v;x++){
            if(graph[u][x]!=0 &&!mset[x]){
                key[x]=std::min(key[x],graph[u][x]);
            }
        }
    }
    return res;
}

int minspannningusingadjlist(std::vector<int>adj[],int v){
    std::priority_queue<std::pair<int,int>,std::vector<int>,std::greater<int>>q;
    int res=0;
    bool mset={false};
    q.push({0,0});
    for(int i=0;i<v;i++){
        q.push({INT_MAX,i});
    }
    for(int count=0;count<v;count++){
        int u=q.top();
        q.pop();
        mset[u]=true;
        res=res+u;

    }
}

int main(){



    std::cin.get();
}