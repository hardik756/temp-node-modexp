#include<iostream>

void check(int a[],int b[],int n,int m)
{
    
}

int main(){

    int n,m;
    std::cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<m;i++){
        std::cin>>b[i];
    }
    check(a,b,n,m);

    std::cin.get();
}