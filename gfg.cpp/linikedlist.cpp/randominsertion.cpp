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
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
}

node* randominsertion(node* head,int data,int pos){
    node*temp= new node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node*curr=temp;
    for(int i=1;i<=pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;    
}

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head=randominsertion(head,50,2);
    print(head);
    std::cin.get();
}