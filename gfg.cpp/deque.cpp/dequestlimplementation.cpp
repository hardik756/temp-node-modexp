#include<iostream>
#include<deque>

int main(){

    std::deque<int>dq;
    dq={10,20,30};
    auto it=dq.begin();
    it++;
    dq.insert(it,22);
    dq.pop_back();
    dq.pop_front();
    std::cout<<dq.size();
    std::cin.get();

}