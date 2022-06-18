#include<iostream>

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

int search(node* head,int x){
    int count=0;
    node* temp=head;
    while( temp!=NULL){
        if(temp->data==x){
        count++;
        return count;
    }
    else{
        count++;
        temp=temp->next;
    }
    } 
    return -1;
}

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    int x=20;
    std::cout<<search(head, x);

    std::cin.get();
}