#include<iostream>
#include<unordered_set>

int main(){
    
    std::unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    s.insert(20);
//here the type of auto is=std::__detail::_Node_iterator<int, true, false>
    for(auto it=s.begin();it!=s.end();it++){
        std::cout<<*it<<" ";
    }
    s.erase(10);
    std::cout<<*s.find(5)<<std::endl;
    s.clear();
    std::cout<<s.size()<<std::endl;
    s.erase(s.begin(),s.end());//this function can be used to delete a 
//particular area in the hash table 
//s.count(number)can be used to find out whether a no is present or not
//in the given hash table hence it will return either 1 or 0
    std::cin.get();
}