#include<iostream>

int main(){

    int x,n;
    std::cin>>x>>n;
    int res=1;

    while(n>0){
        if(n%2!=0){//you can optimize using n&1 inplace of n%2==0
            res=res*x;
        }
        x=x*x;
        n=n/2;  //can also be written as n>>1;          
    }
    std::cout<<res<<std::endl;

    std::cin.get();
}