#include<iostream>

struct node{
    char data;
    node* next;
    node(char d){
        data=d;
        next=NULL;
    }
};
node*  reverselist(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* curr=head, *prev=NULL,*next=head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    } 
    return prev;   
}
bool palindromecheck(node* head){
    if(head==NULL){
        return true;
    }
    node* slow=head,*fast=head;
    while(fast->next!= NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* revlist=reverselist(slow->next);
    node* curr=head;
    while(revlist!=NULL){
        if(revlist->data!=curr->data){
            return false;
        }
        revlist=revlist->next;
        curr=curr->next;
    }
    return true;

}

int main(){



    std::cin.get();
}