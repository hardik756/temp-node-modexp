//in this technique we will find the max possible sum of k consecutive no
#include<iostream>
int windowslid(int arr[],int n,int k){
    int sum=0;
    
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    int res=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        res=std::max(sum,res);
    }
    return res;
}

int main(){

    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<windowslid(arr,n,k);

    std::cin.get();
}