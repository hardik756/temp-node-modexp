#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

void prevsmallest(int arr[],int n,int prev[]){
    std::stack<int>s;
    s.push(arr[0]);
    prev[0]=-1;
    for(int i=1;i<n;i++){
        while(s.empty()==false&&s.top()>=arr[i]){
            s.pop();
            int res=s.empty()?-1:s.top();
            prev[i]=res;
            s.push(arr[i]);
        }
    }
}

void nextsmallest(int arr[],int n,int next[]){
    std::stack<int>s;
    std::vector<int>v;
    s.push(arr[n-1]);
    v.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && s.top()>=arr[i]){
            s.pop();
            int res=s.empty()?-1:s.top();
            v.push_back(res);
            s.push(arr[i]);
        }
    }
    std::reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        next[i]=v[i];
    }
}

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

int main(){

    int arr[]={6,2,5,4,1,5,6};
    std::cout<<histogramarea(arr,7);

    std::cin.get();
}