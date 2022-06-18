#include<iostream>
int sqroot(int n){
    int low=0,high=n,ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n){
            ans=msq;
            return mid;
        }
        else if(msq<n){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){

    int n;
    std::cin>>n;
    std::cout<<sqroot(n);

    std::cin.get();
}