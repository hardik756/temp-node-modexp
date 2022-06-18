//this function is used to find the position of the element in an infinite
//sized array in log(position) time complexity 

#include<iostream>

int binarysearch(int arr[],int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        return binarysearch(arr,mid+1,high,x);
    }
    else{
        return binarysearch(arr,low,mid-1,x);
    }
}

int index(int arr[],int n,int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(true){
        if(arr[i]==x){
            return i;
        }
        if(arr[i]>x){
            return binarysearch(arr,i/2+1,i-1,x);
        }
        i=i*2;
    }
}

int main(){

    std::cin.get();
}