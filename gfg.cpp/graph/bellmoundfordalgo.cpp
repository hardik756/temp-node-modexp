#include<iostream>
#include<stack>
#include<vector>

void addedge(std::vector<int>adj[],int u,int v){
    adj[u].push_back(v);
}

void bellmanford(std::vector<int>adj[],int v,int s,int weight[][4]){
    int dist[v];
    std::fill(dist,dist+v,INT_MAX);
    dist[s]=0;
    for(int count=0;count<v;count++){
        for(auto x:adj[count]){
            if(dist[count]!=INT_MAX && dist[x]>dist[count]+weight[count][x]){
                dist[x]=dist[count]+weight[count][x];
            }
        }
    }
    for(int i=0;i<v;i++){
        std::cout<<dist[i]<<" ";
    }
}

int main(){

    std::vector<int>adj[4];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,2,3);
    addedge(adj,1,2);
    int weight[4][4];
    weight[0][1]=1;
    weight[0][2]=2;
    weight[1][3]=2;
    weight[2][3]=3;
    weight[1][2]=-3;
    bellmanford(adj,4,0,weight);
    std::cin.get();
}