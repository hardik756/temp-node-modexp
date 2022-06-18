#include<iostream>

void selectionsort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int greatest=0;
        for(int j=1;j<n-i;j++){
            if(arr[j]>arr[greatest]){
                greatest=j;
            }
        }
        std::swap(arr[greatest],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

class insertionsort{
    public:
    insertionsort(int arr[],int n){
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                for(int j=i;j>0;j--){
                if(arr[j]>arr[j-1]){
                    break;
                }
                std::swap(arr[j],arr[j-1]);
                }
            }
        }        
    }
    void print(int arr[],int n){
        for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";
        }
    }
    

};

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    // selectionsort(n,arr);
    insertionsort e(arr,n);
    e.print(arr,n);
    std::cin.get();
}