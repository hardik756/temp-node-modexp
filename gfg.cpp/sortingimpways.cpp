#include<iostream>
void cyclesortdistinct(int arr[],int n){
    int i=0,j=0;
    while(i<n){
        int pos=0;
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                pos++;
            }
        }   
        std::swap(arr[i],arr[pos]);
        if(i==pos){
            i++;
        }
    }
}

void countsort(int arr[],int n,int k){
    int count[k]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int op[n];
    for(int i=1;i<n;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        op[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=op[i];
    }
}

int main(){

    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    // cyclesortdistinct(arr,n);
    countsort(arr,n,k);
    for(int x:arr){
        std::cout<<x<<" ";
    }

    std::cin.get();
}