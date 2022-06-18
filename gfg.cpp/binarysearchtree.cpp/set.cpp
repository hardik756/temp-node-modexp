#include<iostream>
#include<set>
#include<algorithm>

int main(){

    std::set<int,std::greater<int>>s;
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for(int x:s){
        std::cout<<x<<" ";
    }
    for(auto it=s.begin();it!=s.end();it++){
        std::cout<<*it<<" ";
    }
    auto ite=s.lower_bound(30);//it will print 30
    auto itu=s.upper_bound(30);//it will print 20 bcoz of greater in line 7
    


    std::cin.get();
}