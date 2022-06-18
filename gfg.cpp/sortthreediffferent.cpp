#include<iostream>

void checkandswap(int arr[],int n){
    int low=0,high=n-1,mid=0;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            std::swap(arr[mid],arr[low]);
            mid++;
            low++;            
        }
        else{
            std::swap(arr[high],arr[mid]);
            high--;
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
    checkandswap(arr,n);
    for(int x:arr){
        std::cout<<x<<" ";
    }

    std::cin.get();
}