#include<iostream>
#include<stack>

void poswiseclosest(int arr[],int n){
    std::stack<int>s;
    s.push(arr[0]);
    std::cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int res=s.empty()?-1:s.top();
        std::cout<<res<<" ";
        s.push(arr[i]);
    }
}

int main(){

    int arr[]={15,10,18,12,4,6,2,8};
    poswiseclosest(arr,8);  
    std::cin.get();
}