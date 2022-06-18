#include<iostream>
#include<unordered_map>
void freqcount(int arr[],int n){
    std::unordered_map<int,int>s;
    for(int i=0;i<n;i++){
        s[arr[i]]++;
    }
    for(auto x:s){
        std::cout<<x.first<<" "<<x.second<<std::endl;
    }
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    freqcount(arr,n);

    std::cin.get();
}