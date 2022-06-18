#include<iostream>
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node* begininsertcir(node* head,int x){
    node* temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }  
    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return head;

}

void cirprint(node* head){
    node*curr=head;
    if(head==NULL){
        std::cout<<head<<std::endl;
        return;
    }
    do{
        std::cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}

node* endinsertcir(node* head, int x){
    node* temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    node* curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
//one more efficient way of doing this is add after head and swap head and that elememt
}

node* headdelete(node* head){
    if(head->next==head){
        delete head;
        return NULL;
    }
   head->data=head->next->data;
    node* temp=head->next->next;
    delete head->next;
    head->next=temp;
    return head;
}

node* kthnodedelelt(node* head, int k){
//assumption considered k>0 and k<=total length
    if(head->next==head){
        delete head;
        return NULL;
    }
    if(k==1){
        return headdelete(head);
    }
    node* curr=head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    node* temp=curr->next;
    curr->next=temp->next;
    delete temp;
    return head;
}

node* sortedinsert(node*head,int x){
    if( head==NULL){
        return begininsertcir(head,x);
    }
    int count=1;
    node* curr=head;
    node* temp=new node(x);
    while(curr->next!=head){
        if(x<(curr->next->data)){
            break;
        }
        count++;
        curr=curr->next;
    }
    if(count==1){
        return begininsertcir(head,x);
    }
    count++;
    temp->next=curr->next;
    curr->next=temp;
    return head; 
}

void middleelement(node* head){
    if(head==NULL){
        return;
    }
    node* fast=head;
    node* slow=head;
    while(fast!=head && fast->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    std::cout<<slow->data<<std::endl;
}

int main(){

    node*head=NULL;
    head=endinsertcir(head,10);
    head=endinsertcir(head,20);
    head=endinsertcir(head,30);
    head=endinsertcir(head,40);
    head=sortedinsert(head,25);
    head=sortedinsert(head,5);
    head=sortedinsert(head,50);
    
    cirprint(head);
    std::cin.get();
}