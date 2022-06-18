#include<iostream>
#include<vector>

int main(){

    int n,res1=0,res2=0;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    int sb=x^(~(x-1));
    for(int i=0;i<n;i++){
        if(arr[i]&sb!=0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    



    std::cin.get();
}