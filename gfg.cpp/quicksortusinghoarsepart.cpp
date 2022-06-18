#include<iostream>
int hoarsepartition(int arr[],int l,int h){
    int i=l-1,j=h+1;
    int pivot=arr[l];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        std::swap(arr[i],arr[j]);
    }

}
void qsort(int arr[],int l,int h){
    if(l>=h){
        return;
    }
    int k=hoarsepartition(arr,l,h);
    qsort(arr,l,k);
    qsort(arr,k+1,h);
}
int main(){

    // int n;
    // std::cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //   std::cin>>arr[i];  
    // }
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    for(int x:arr){
        std::cout<<x<<" ";
    }
    std::cin.get();
}