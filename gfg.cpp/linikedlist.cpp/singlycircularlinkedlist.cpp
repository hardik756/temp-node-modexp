#include<iostream>

struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void cirprint(node* head){
    node*curr=head;
    if(head==NULL){
        std::cout<<NULL<<std::endl;
        return;
    }
    do{
        std::cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=head;
    cirprint(head);

    std::cin.get();
}