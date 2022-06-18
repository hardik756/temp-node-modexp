#include<iostream>
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void print(node* head){
    node* current=head;
    while(current!=NULL){
        std::cout<<current->data<<" ";
        current=current->next;
    }
}
void printrec(node*head){
    if(head==NULL){
        return;
    }
    std::cout<<head->data<<" ";
    printrec(head->next);
}

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    printrec(head);
    std::cin.get();
}