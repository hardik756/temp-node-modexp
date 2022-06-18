#include<iostream>
struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node* dbbegininsertcir(node* head,int k){
    node* temp=new node(k);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    head->prev->next=temp;
    temp->next=head;
    head->prev=temp;
    return temp;
}

node* dbendinsertcir(node* head, int k){
    node* temp=new node(k);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev->next;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;    
}

void cirprint(node* head){
    node* curr=head;
    while(curr->next!=head){
        std::cout<<curr->data<<" ";
        curr=curr->next; 
    }
    std::cout<<curr->data<<" ";
}

int main(){
    node* head=NULL;
    for(int i=1;i<=5;i++){
    head=dbendinsertcir(head,10*i);
    }
    cirprint(head);

    std::cin.get();
}