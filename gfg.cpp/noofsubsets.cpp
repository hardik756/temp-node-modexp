#include<iostream>
#include<vector>
#include<string>
int count(int a[],int n,int sum){

    if(n==0){
    return (sum==0)?1:0;
    }
    return count(a,n-1,sum)+count(a,n-1,sum-a[n-1]);
    
}


int main(){
    int n,sum;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cin>>sum;
    std::cout<<count(arr,n,sum);
    std::cin.get();
}