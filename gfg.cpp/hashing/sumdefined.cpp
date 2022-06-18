#include<iostream>
#include<unordered_set>

bool sumzero(int arr[],int n,int sum2){
    std::unordered_set<int>s;
    int sum=arr[0];
    if(arr[0]==sum2){
        return true;
    }
    else{
        s.insert(arr[0]);
    }
    for(int i=1;i<n;i++){
        sum+=arr[i];
        if(s.find(sum-sum2)!=s.end()){
            return true;
        }
        else{
            s.insert(sum);
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
    std::cout<<sumzero(arr,n,sum);

    std::cin.get();
}