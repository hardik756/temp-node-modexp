#include<iostream>

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

class stack{

    public:
    node* head,*curr;
    int count=-1;

    stack(){
        head=NULL;
    }

    void push(int x){
        node* temp=new node(x);
        temp->next=head;
        count++;
        head=temp;
    }

    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return head->data;
    }

    int pop(){
        if(head==NULL){
            return INT_MAX;
        }
        int res=head->data;
        count--;
        node* temp=head;
        head=head->next;
        delete temp;
        return res;
    }

    int size(){
        return count+1;
    }
    bool isempty(){
        return (count==-1);
    }

};

int main(){

    std::cin.get();
}