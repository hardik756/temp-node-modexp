#include<iostream>
void steps(int n,char a,char b,char c){
    if(n==1){
        std::cout<<"move"<<n<<"from "<<a<<" to "<<c<<std::endl;
        return;
    }  
    steps(n-1,a,c,b);
    std::cout<<"move "<<n<<"from"<< a<<" to "<<c<<std::endl;
    steps(n-1,b,a,c);
}

int main(){

    int n;
    std::cin>>n;
    char a,b,c;
    a='A';
    b='B';
    c='C';
    steps(n,a,b,c);

    std::cin.get();
}