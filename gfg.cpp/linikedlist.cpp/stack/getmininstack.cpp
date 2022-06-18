#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

struct Stack{

    std::vector<int>v;
    std::stack<int>s;
    
    void push(int x){
        v.push_back(x);
        if(s.top()>=x || s.empty()){
            s.push(x);
        }
    }

    int pop(){
        int res=v.back();
        if(s.top()==res){
            s.pop();
        }
        v.pop_back();
        return res;
    }

    int top(){
        int res=v.back();
        return res;
    }
    
    bool isempty(){
        return !v.size();
    }

    int getmin(){
        return s.top();
    }

};


int main(){

    Stack s;
    s.push(2);
    s.push(10);
    std::cout<<s.top();
    std::cin.get();
}