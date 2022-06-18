#include<iostream>
#include<stack>

void printspan(int arr[],int n){
    std::stack<int>s;
    s.push(0);
    std::cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty()?i+1:i-s.top();
        std::cout<<span<<" ";
        s.push(i);
    }
}


int main(){



    std::cin.get();
}