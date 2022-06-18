#include<iostream>
#include<stack>
#include<algorithm>

int histogramarea(int arr[],int n){
    std::stack<int>s;
    int res=0;
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            int tp=s.top();
            s.pop();
            int curr= arr[tp]*(s.empty()?i:i-s.top()-1);
            res=std::max(res,curr);
        }
        s.push(i);
    }        
    while(s.empty()==false){
        int tp=s.top();
        s.pop();
        int curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
        res=std::max(res,curr);
    }
    return res;
}

int largestbinaryrectangle(int n,int m,int* arr[]){
    int count=0;
    int res=histogramarea(arr[0],m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                arr[i][j]+=arr[i-1][j];
            }
        }
        res=std::max(res,histogramarea(arr[i],m));
    }
    return res;
}

int main(){

    


    std::cin.get();
}