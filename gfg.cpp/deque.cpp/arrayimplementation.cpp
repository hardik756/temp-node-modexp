#include<iostream>

struct deque{
    int cap,size,front;
    int *arr;
    deque(int n){
        cap=n;
        size=0;
        arr=new int[cap];
        front=0;
    }

    void insertfront(int x){
        front=(front-1+cap)%cap;
        arr[front]=x;
        size++;
    }  

    void insertrear(int x){
        int rear=(rear+size-1)%cap;
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }

    void deletefront(){
        front=(front+1)%cap;
        size--;
    }

    void deleterear(){
        size--;
    }

    

};

int main(){



    std::cin.get();
}