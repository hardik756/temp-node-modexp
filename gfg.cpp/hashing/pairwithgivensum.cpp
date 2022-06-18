#include<iostream>
#include<unordered_set>
#include<unordered_map>

bool sumpair(int arr[],int n,int sum){
    std::unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;   
}

int main(){

    int n,sum;
    std::cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<sumpair(arr,n,sum);

    std::cin.get();
}