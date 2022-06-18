#include<iostream>

int main(){

    int x,y;
    std::cin>>x>>y;
    std::cout<<(x<<y)<<(x>>y)<<std::endl;

    std::cin.get();
}
/* left shift operator works as x*(2^y) and right shift operator here works as 
(x/2^y)*/
// it can make ip and op faster than it was already and can be used to mul or div by pow of 2