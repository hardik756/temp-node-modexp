#include<iostream>

void primefactors(int n){
    int i=2;
    while(n!=1){
        if(n%i==0){
            n=n/i;
            std::cout<<i<<std::endl;
            continue;
        }
        i++;
    }

}
void primefactorfast(int n){
    
    if(n<=1){
        return;
    }
    while(n%2==0){
        n=n/2;
        std::cout<<2<<" ";
    }
    while(n%3==0){
        n=n/3;
        std::cout<<3<<" ";
    }
    for(int i=5;i*i<=n;i++){
        while(n%i==0){
            n=n/i;
            std::cout<<i<<" ";
        }
        while(n%(i+2)==0){
            n=n/(i+2);
            std::cout<<i+2<<" ";
        }
        i=i+6;
    }
    if(n>3){
        std::cout<<n;
    }

}

int main(){
    
    int n;
    std::cin>>n;
    primefactors(n);

    std::cin.get();
}