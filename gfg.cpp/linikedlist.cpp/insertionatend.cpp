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

node* deltail(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;

}
node* delhead(node* head){
    if(head==NULL){
        return NULL;
    }
    node*temp=head->next;
    delete head;
    return temp;
}

node* insertend(node* head,int x){
    node* temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}

int main(){

   node* head=NULL;
   head=insertend(head,10);
   head=insertend(head,20);
   head=insertend(head,30);
   print(head);

    std::cin.get();
}