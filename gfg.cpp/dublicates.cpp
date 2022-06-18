#include<iostream>
int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>n;
    }
    int res=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[i+1]=arr[res];
            res++;
        }
    }

    std::cin.get();
}