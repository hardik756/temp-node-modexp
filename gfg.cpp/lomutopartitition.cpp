#include<iostream>
int lomutopartition(int arr[],int l,int h){

    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<arr[h]){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[h]);
    return i+1;
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int p;
    std::cin>>p;
    std::swap(arr[p],arr[n-1]);
    std::cout<<lomutopartition(arr,0,n-1);

    std::cin.get();
}