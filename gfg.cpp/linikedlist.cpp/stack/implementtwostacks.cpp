#include<iostream>

struct twostacks{
    int *arr,cap,top1,top2;
    twostacks(int x){
        cap=x;
        top1=-1;
        top2=x;
        arr=new int[cap];
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2--;
            return x;
        }
    }

};

int main(){

    

    std::cin.get();
}