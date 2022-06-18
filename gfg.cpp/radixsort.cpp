#include<iostream>

void radixsort(int arr[],int n){
    
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    radixsort(arr,n);
    for(int x:arr){
        std::cout<<x<<" ";
    }

    std::cin.get();
}