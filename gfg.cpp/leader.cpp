#include<iostream>
void leader(int arr[],int n){
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            std::cout<<arr[i]<<" ";
        }
        else{
            std::cout<<arr[i]<<" ";
            break;
        }
    }
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    leader(arr,n);

    std::cin.get();
}