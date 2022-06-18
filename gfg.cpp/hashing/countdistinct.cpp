#include<iostream>
#include<unordered_set>
int count(int arr[],int n){
    std::unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<count(arr,n);

    std::cin.get();
}