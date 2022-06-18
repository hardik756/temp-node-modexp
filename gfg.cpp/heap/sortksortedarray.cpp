#include<iostream>
#include<queue>

void sortk(int arr[],int n,int k){
    std::priority_queue<int,std::vector<int>,std::greater<int>>pq;
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1;i<n;i++){
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(pq.empty()==false){
        arr[index++]=pq.top();
        pq.pop();
    }
}



int main(){

    std::cin.get();
}