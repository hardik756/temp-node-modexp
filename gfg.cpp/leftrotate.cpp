//to left rotate an array by d(2 for eg) 12345--34512
#include<iostream>

void reverse(int arr[],int low,int high){

    while(low<high){
        std::swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftrotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){

    int n,d;
    std::cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    leftrotate(arr,n,d);

    std::cin.get();
}