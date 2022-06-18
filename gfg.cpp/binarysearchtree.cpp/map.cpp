#include<iostream>
#include<map>


int main(){

    std::map<int,int>m;
    m.insert({10,200});
    m[5]=100;//diff bw sq operator and insert fn is ... if we
    //try to print a function that is not present in the map...it adds it
    //std::cout<<m[20] this fn will add the 20 with the map with second value to be 0

    m.insert({3,300});
    m.at(10)=400;
    auto finding=m.find(10);
    m.erase(20);
    for(auto& x:m){
        std::cout<<x.first<<" "<<x.second<<" ";
    }

    std::cin.get();
}