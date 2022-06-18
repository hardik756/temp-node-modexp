#include<iostream>
bool twopointer(int arr[],int n,int x,int left,int right){

    if(left>right){
        return false;
    }
    
    if(arr[left]+arr[right]==x){
        return true;
    }
    else if(arr[left]+arr[right]>x){
        return twopointer(arr,n,x,left,right-1);
    }
    else{
        return twopointer(arr,n,x,left+1,right);
    }
}

int main(){

    int n,x;
    std::cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<twopointer(arr,n,x,0,n-1);

    std::cin.get();
}