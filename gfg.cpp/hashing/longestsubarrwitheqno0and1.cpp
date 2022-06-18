#include<iostream>
#include<unordered_set>

int bincount(int arr[],int n){
    std::unordered_set<int>s;
    int res=0,count=0,zerocount=0;
    for(int i=0;i<n;i++){

        if(arr[i]==0){
            res--;
        }
        else{
            res++;
        }
        s.insert(res);
        if(res==0){
            count=s.size();
            s.erase(0);
            zerocount++;
        }
    }
    return count;
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<bincount(arr,n);

    std::cin.get();
}