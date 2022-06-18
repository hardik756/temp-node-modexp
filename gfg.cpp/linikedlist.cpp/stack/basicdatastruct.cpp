#include<iostream>
struct stack{
    int* arr;
    int cap;
    int top;    
    stack(int x){
        cap=x;
        arr=new int[x];
        top=-1;
    }
    void push(int x){
        if(top>=cap){
            std::cout<<"overflow condition"<<std::endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){
            std::cout<<"underflow condition"<<std::endl;
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1){
            std::cout<<"underflow condition"<<std::endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int size(){
        return top+1;
    }

};

int main(){




    std::cin.get();
}