#include<iostream>

void mergetwo(int left[],int right[],int n,int m)
{
    int i=0,j=0,k=0;
    int temp[n+m];
    while(i!=n || j!=m){
        if(left[i]<=right[j]){
            temp[k]=left[i];
            i++;
            k++;
        }
        else{
            temp[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n){
        temp[i]=left[i];
        i++;
    }
    while(j<m){
        temp[j]=left[j];
        j++;
    }
     for(int i=0;i<m+n;i++){
        std::cout<<temp[i]<<" ";
    }
    
}

void merge(int arr[],int l,int mid,int r){

    int n=mid-l+1;
    int m=r-mid;
    int left[n],right[m];
    for(int i=0;i<n;i++){
        left[i]=arr[l+i];
    }
    for(int i=0;i<m;i++){
        right[i]=arr[mid+i+1];
    }
    mergetwo(left,right,n,m);
}

void mergesort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
   
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    mergesort(arr,0,n);
    

    std::cin.get();
}