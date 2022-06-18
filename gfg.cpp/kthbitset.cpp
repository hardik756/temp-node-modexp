#include<iostream>
int main(){

    int n,k;
    std::cin>>n>>k;
    n=(n>>(k-1));
    if(n%2==0){

        std::cout<<"NO"<<std::endl;
    }
    else{
        std::cout<<"YES"<<std::endl;
    }

    std::cin.get();
}