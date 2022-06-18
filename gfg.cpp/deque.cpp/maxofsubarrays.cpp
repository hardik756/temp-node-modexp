#include<iostream>
#include<deque>

void printmaxk(int arr[],int n,int k){
    std::deque<int>dq;

    for(int i=0;i<k;i++){
        while(!dq.empty()&&arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i=k;i<n;i++){
        std::cout<<arr[dq.front()]<<" ";
        while(!dq.empty()&& dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty()&& arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
}

int main(){

    int arr[]={60,50,40,30,20};
    printmaxk(arr,5,3);   

    std::cin.get();
}