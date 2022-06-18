#include<iostream>
void repeat1(int arr[],int n){
    bool a[n]={false};
    for(int i=0;i<n;i++){
        if(a[arr[i]]){
            std::cout<<arr[i];
            break;
        }
        a[arr[i]]=true;
    }
}
int repeat2(int arr[],int n){
    int slow=arr[0]+1,fast=arr[0]+1;
    do{
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    }while(slow!=fast);
    slow=arr[0]+1;
    while(slow!=fast){
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return  slow-1;
}
int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    // repeat1(arr,n);
    std::cout<<repeat2(arr,n);
    std::cin.get();
}