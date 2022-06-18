#include<iostream>
int rainwater(int arr[],int n){

    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=std::max(arr[i],lmax[i-1]);
    }
     rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=std::max(arr[i],rmax[i+1]);
    }
    for(int i=0;i<n;i++){
        res=res+std::min(lmax[i],rmax[i])-arr[i];
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
    std::cout<<rainwater(arr,n);

    std::cin.get();
}