#include<iostream>
#include<unordered_map>
#include<unordered_set>

int countlength(int arr[],int n,int sum){
    std::unordered_map<int,int> s;
    int res=0,presum=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum==sum){
            res=i+1;
        }
        if(s.find(presum)==s.end()){
            s.insert(presum,i);
        }
        if(s.find(presum-sum)!=s.end()){
            res=std::max(res,i-s[presum-sum]);
        }
    }
    return res;    
}

int main(){

    int n,sum;
    std::cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<countlength(arr,n,sum);
    std::cin.get();
}