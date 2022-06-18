#include<iostream>
int maxsubarraysum(int arr[],int n){
    int max=arr[0],res=arr[0];
    for(int i=1;i<n;i++){
        max=std::max(arr[i],arr[i]+max);
        res=std::max(res,max);
    }
    return res;
}
int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<maxsubarraysum(arr,n);

    std::cin.get();
}