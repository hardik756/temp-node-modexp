#include<iostream>

int peakelement(int arr[],int low,int high){
    
    int mid=(low+high)/2;
    while(low<=high){
        if((mid==0 || arr[mid-1]<=arr[mid])&& (mid==n-1 || arr[mid-1]>=arr[mid])){
            return mid;
        }
        if(mid>0 && arr[mid-1]>=arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;

}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<peakelement(arr,0,n-1);

    std::cin.get();
}