#include<iostream>
int  lomutopartition(int arr[],int l,int r){
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<arr[r]){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[r]);
    return i+1;
}

int element(int arr[],int n,int k){
    int p,l=0,r=n-1;
    while(l<=r){
       p=lomutopartition(arr,l,r);
       if(p==k-1){
           return arr[p];
       }
       else if(p>k-1){
           r=p-1;
       }
       else{
           l=p+1;
       }
    }
    return -1;
}

int main(){

    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<element(arr,n,k);

    std::cin.get();
}