#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>

std::vector<int>& dijkstra(std::vector<int>graph[],int v,int s){
    std::vector<int>dist(v,INT_MAX);
    dist[s]=0;
    std::vector<bool>fin(v,false);
    for(int count=0;count<v-1;count++){
        int u=-1;
        for(int i=0;i<v;i++){
            if(!fin[i]&&(u==-1 || dist[u]>dist[i])){
                u=i;
            }
        }
        fin[u]=true;
//relax operation
        for(int x=0;x<v;x++){
            if(graph[u][x]!=0 &&fin[x]==false){
                dist[x]=std::min(dist[u]+graph[u][x],dist[x]);
            }
        }
    }

}

int main(){


    std::cin.get();
}