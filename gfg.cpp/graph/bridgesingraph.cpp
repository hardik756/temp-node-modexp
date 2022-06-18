#include<iostream>
#include<stack>
#include<queue>
#include<vector>

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfsrec(std::vector<int>adj[],int s,int v,bool visited[],std::vector<int>&vt){

    visited[s]=true;
    vt.push_back(s+1);
    for(auto x:adj[s]){
        dfsrec(adj,x,v,visited,vt);
    }

}
std::vector<int>dfs(std::vector<int>adj[],int v){
    bool visited[v]={false};
    std::vector<int>dis;
    for(int x=0;x<v;x++){
        if(visited[x]==false){
            dfsrec(adj,x,v,visited,dis);
        }
    }
    return dis;
}

int main(){



    std::cin.get();
}