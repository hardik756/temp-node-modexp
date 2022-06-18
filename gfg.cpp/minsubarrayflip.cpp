#include<iostream>
void minflip(int arr[],int n){
    int res=0,count=0;
    for(int i=1;i<n;i++){   
        
        if(arr[res]!=arr[i]){
            count++;
            res=i;
            if(count%2==0 && count!=0){
            std::cout<<i-1<<std::endl;
        }
        else{
            std::cout<<"from "<<i<<" to ";
        }    
            
        }   
    }
}
int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    minflip(arr,n);

    std::cin.get();
}