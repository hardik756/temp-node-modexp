#include<iostream>

int countandmerge(int arr[],int l,int mid,int r){
    
}

int count(int arr[],int l,int r){
    int res=0;
    if(l<r){
        int mid=(l+r)/2;
        res+=count(arr,l,mid);
        res+=count(arr,mid+1,r);
        res+=countandmerge(arr,l,mid,r);
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
    std::cout<<count(arr,0,n);

    std::cin.get();
}