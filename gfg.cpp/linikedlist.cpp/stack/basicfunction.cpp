#include<iostream>
#include<stack>

int main(){

    std::stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout<<s.top()<<std::endl;
    s.pop();
    std::cout<<s.size()<<" "<<s.empty()<<std::endl;

    std::cin.get();
}