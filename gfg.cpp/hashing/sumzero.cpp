#include<iostream>
#include<unordered_set>

bool sumzero(int arr[],int n){
    std::unordered_set<int>s;
    int sum=arr[0];
    if(arr[0]==0){
        return true;
    }
    else{
        s.insert(arr[0]);
    }
    for(int i=1;i<n;i++){
        sum+=arr[i];
        if(s.count(sum)){
            return true;
        }
        else{

            s.insert(sum);
        }
    }
    return false;
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<sumzero(arr,n);

    std::cin.get();
}