#include<iostream>
#include<algorithm>
#include<memory>

int sum(int arr[],int a,int e){
    int sum=0;
    for(int i=a;i<e;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int minallocate1(int arr[],int n, int k){

   if(k==1){
       return sum(arr,0,n-1);
   }
   if(n==1){
       return arr[0];
   }
   int res=INT_MAX;
   for(int i=1;i<n;i++){
       return std::min(res,std::max(minallocate1(arr,i,k-1),sum(arr,i,n-1)));
   }
   return res;
}
bool isfeasible(int arr[],int n,int k,int ans){
    int count=1,sum=0;
    for(int i=0;i<n;i++){
        if(sum>ans){
            sum=0;
            count++;
        }
        else{
            sum=sum+arr[i];
        }
    }
    return (count<=k);
}

int minallocatefeasible(int arr[],int n,int k){
    int sum=arr[0],total=arr[0];
    for(int i=1;i<n;i++){
        sum=std::max(arr[i],sum);
        total=total+arr[i];
    }
    int low=sum,high=total,res=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(isfeasible(arr,n,k,mid)){
            high=mid-1;
            res=mid;
        }
        else{
            low=mid+1;
        }
    }
    return res;    
    }

int main(){

    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<minallocate1(arr,n,k)<<std::endl;
    std::cout<<minallocatefeasible(arr,n,k)<<std::endl;

    std::cin.get();
}