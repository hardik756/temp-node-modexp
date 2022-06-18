#include<iostream>
#include<queue>

void kclosest(int arr[],int n,int k,int x){
    std::priority_queue<std::pair<int,int>>pq;
    for(int i=0;i<k;i++){
        pq.push({std::abs(arr[i]-x),i});
    }
    for(int i=k;i<n;i++){
        int diff=arr[i]-x;
        if(diff<pq.top().first){
            pq.pop();
            pq.push({diff,i});
        }
    }
    while(pq.empty()==false){
        std::cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }
}

int main(){



    std::cin.get();
}