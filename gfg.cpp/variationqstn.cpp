#include<iostream>
int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int res=0;
    for(int i=1;i<=n+1;i++){
        res=res^i;
    }
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    std::cout<<res<<std::endl;


    std::cin.get();
}