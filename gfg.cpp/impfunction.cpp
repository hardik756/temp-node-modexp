#include<iostream>
int sumofdigits(int n){

    if(n==0){
        return 0;
    }
    return n%10+sumofdigits(n/10);

}

void dtb(int n){
//this functionn will convert decimal no to binary no
    if(n==0){
        return;
    }
    dtb(n/2);
    std::cout<<n%2;

}
int powroftwo(int n){

    if(n==1){
        return 0;
    }
    return 1+powroftwo(n/2);

}

int main(){

    int n,k;
    std::cin>>n;
    k=sumofdigits(253);
    std::cout<<k;

    std::cin.get();
}