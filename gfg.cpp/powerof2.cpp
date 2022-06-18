/* for being a power of 2, the desired no must have only one set bit in 
the given binary representation and hence can be calculated through it*/

#include<iostream>
bool solve(unsigned int n){
    if(n==0){
        return false;
    }
    return (n&(n-1)==0);
    //in this method ,if n is a power of 2 it will have only one set bit and
    // for n-1 all the places to the right where there were 0 will be
    // replaced by 1 and the 1's position in n will be set to 0
}

int main(){

    int n;
    std::cin>>n;
    std::cout<<solve(n);
    std::cin.get();
}