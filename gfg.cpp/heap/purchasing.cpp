#include<iostream>
#include<queue>

int purchasemax(int cost[],int n,int sum){
    std::priority_queue<int,std::vector<int>,std::greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(cost[i]);
    }
    int res=0;
    while(pq.top()<sum && pq.empty()==false){
        res++;
        sum=sum-pq.top();
        pq.pop();    
    }
    return res;
}

int main(){

    

    std::cin.get();
}