#include<iostream>

struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

node* insertbegin(node* head,int x){
    node* curr=new node(x);
    head->prev=curr;
    curr->next=head;
    return curr;
}

void print(node* head,node* tail){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
    while(tail!=NULL){
        std::cout<<tail->data<<" ";
        tail=tail->prev;
    }
}
void printfront(node*head){
    while(head!=NULL){
        std::cout<<head->data<<" ";
        head=head->next;
    }
}

node* reverse(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*prev=NULL;
    node*curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }    
    return prev->prev;
}

node* headdel(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
            delete head;
            return NULL;
        }
    node*curr=head->next;
    delete head;
    curr->prev=NULL;
    return curr;

}

int main(){

    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->prev=head;
    head->next->next->prev=head->next;
    node* tail=head->next->next;
    head=insertbegin(head,5);//begin insertion part
    head=reverse(head);//reverse part
    head=headdel(head);
    printfront(head);

    std::cin.get();
}