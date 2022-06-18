#include<iostream>
#include<stack>
#include<queue>

std::vector<int>transposematrix[5];

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    transposematrix[v].push_back(u);
}

void dfsrec(std::vector<int>adj[],bool visited[],int s,std::stack<int>&st){
    visited[s]=true;
    for(auto x:adj[s]){
        if(visited[x]==false){
            dfsrec(adj,visited,x,st);
        }
    }
    st.push(s);
}

std::vector<int> dfs(std::vector<int>adj[],int v){
    bool visited[v]={false};
    std::stack<int>st;
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            dfsrec(adj,visited,i,st);
        }
    }
    std::vector<int>vt;
    while(!st.empty()){
        vt.push_back(st.top());
        st.pop();
    }
    return vt;
}

void dfsrec2(std::vector<int>adj[],bool visited[],int s){
    visited[s]=true;
    std::cout<<s<<" ";
    for(auto x:adj[s]){
        if(visited[x]==false){
            dfsrec2(adj,visited,x);
        }
    }
}

void kosarajualgo(std::vector<int>trans[],std::vector<int>adj[],int v){
    bool visited[v]={false};
    std::vector<int>vtr=dfs(adj,v);
    for(int i=0;i<v;i++){
        std::cout<<vtr[i]<<" ";
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            dfsrec2(trans,visited,vtr[i]);
        }
    }
}

int main(){

    std::vector<int>adj[5];
    addedge(adj,1,0);
    addedge(adj,0,2);
    addedge(adj,2,1);
    addedge(adj,0,3);
    addedge(adj,3,4);
    kosarajualgo(transposematrix,adj,5);

    std::cin.get();
}