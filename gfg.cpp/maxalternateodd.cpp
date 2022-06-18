#include<iostream>

int alternate(int arr[],int n){
    int res=1,count=1;
    for(int i=0;i<n;i++){
        if((arr[i]%2==0&&arr[i+1]%2==1)||(arr[i]%2==1&&arr[i+1]%2==0)){
            count++;
        }
        else{
            res=std::max(res,count);
            count=1;
        }
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
    std::cout<<alternate(arr,n);

    std::cin.get();
}