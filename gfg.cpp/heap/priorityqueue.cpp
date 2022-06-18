#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

int main(){

    std::priority_queue<int,std::vector<int>,std::greater<int>>pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    std::cout<<pq.size();
    std::cout<<pq.top();
    while(pq.empty()==false){
        std::cout<<pq.top()<<" ";
        pq.pop();
    }
    std::cin.get();
}