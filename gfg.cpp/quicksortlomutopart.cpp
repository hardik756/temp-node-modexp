#include<iostream>

int lomutopartition(int arr[],int l,int h){
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<arr[h]){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[h]);
    return i+1;

}

void qsort(int arr[],int l,int h){
    if(l<h){     
    int k=lomutopartition(arr,l,h);
    qsort(arr,l,k-1);
    qsort(arr,k+1,h);
    }
}

int main(){

    // int n;
    // std::cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     std::cin>>arr[i];
    // }
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    for(int x:arr){
        std::cout<<x<<" ";
    }

    std::cin.get();
}