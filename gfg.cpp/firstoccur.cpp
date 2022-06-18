#include<iostream>
int firstoccur(int arr[],int low,int high,int x){

    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return firstoccur(arr,mid+1,high,x);
    }
    else if(x<arr[mid]){
        return firstoccur(arr,low,mid-1,x);
    }
    else{
        if(mid==0 || arr[mid]!=arr[mid-1]){
            return mid;
        }
        else{
            return firstoccur(arr,low,mid-1,x);
        }
    }

}
int lastoccur(int arr[],int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return lastoccur(arr,mid+1,high,x);
    }
    else if(x<arr[mid]){
        return lastoccur(arr,low,mid-1,x);
    }
    else{
        if(mid==-1 || arr[mid]!=arr[mid+1]){
            return mid;
        }
        else{
            return lastoccur(arr,mid+1,high,x);
        }
    }
}

int main(){

    int n,x;
    std::cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<firstoccur(arr,0,n-1,x);//recursive implementation
    std::cout<<lastoccur(arr,0,n-1,x);


    std::cin.get();
}