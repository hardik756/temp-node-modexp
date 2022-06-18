#include<iostream>
//majority element is the element which repeats more than n/2 times in array

int maj(int arr[],int n){//finding index of majority element
    int count=1,res=0;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    return res;
}

int count(int arr[],int n){//no of occurances
    int res=0;
    int index=maj(arr,n);
    for(int i=0;i<n;i++){
        if(arr[index]==arr[i]){
            res++;
        }
    }
    if(res>n/2){
        return index;
    }
    else{
        return -1;
    }  
}

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<count(arr,n);

    std::cin.get();
}