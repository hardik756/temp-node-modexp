#include<iostream>
#include<queue>
#include<stack>

void recursivereverse(std::queue<int>& q){
    if(q.empty()){
        return;
    }
    int x=q.front();
    q.pop();
    recursivereverse(q);
    q.push(x);
}

int main(){

    std::queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    recursivereverse(q);
    while(!q.empty()){
        std::cout<<q.front()<<" ";
        q.pop();
    }
    // std::stack<int>s;
    // while(!q.empty()){
    //     s.push(q.front());
    //     q.pop();
    // }    
    // while(!s.empty()){
    //     std::cout<<s.top()<<" ";
    //     s.pop();
    // }


    std::cin.get();
}