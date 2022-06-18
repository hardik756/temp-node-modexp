/*floyd algorithm is an special type of algorithm in which the fast moves
at twice the speed of the slow and if there is a loop present then 
since the distance between them will be increasing by 1 at every iteration
there will be a time when both fast and slow overlap and the overlap occurs 
due to the 1 step increase because eventually the distance will be
will be x and x+n where n is the length of the loop*/
#include<iostream>

struct node{
    node* next;
    int data;
    node(int x){
        data=x;
        next=NULL;
    }
};

bool floydcycledetection(node* head){
    node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

void loopremoval(node* head){
    node* fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return;
    }
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
void deletenodewithpointer(node* ptr){
//wont work if the node to be deleted is the last node
    node* temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete temp;

}
node* segregateevenodd(node*head){
    node* es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
    for(node* curr=head;curr->next!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(es==NULL){
                es=curr;
                ee=es;
            }
            else{
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL){
                os=curr;
                oe=os;
            }
            else{
                oe->next=curr;
                oe=oe->next;
            }
        }
    }
    if(os==NULL || es==NULL){
        return head;
    }
    ee->next=os;
    oe->next=NULL;
    return es;
}
int getintersectionoftwolinkedlist(node* h1, node*h2){
    node* curr1=h1;
    node* curr2=h2;
    while(curr1->next!=NULL || curr1->next!=h2->next){
        curr1=curr1->next;
    }
    if(curr1->next==h2->next){
        return h2->next->data;
    }
    while(curr2->next!=h1->next || curr2->next!=NULL){
        curr2=curr2->next;
    }
    if(curr2->next==h1->next){
        return curr2->next->data;
    }
    else{
        return -1;
    }
}
node* pairwisenodeswap(node* head){
    if(head==NULL ||head->next==NULL){
        return;
    }
    node* curr=head->next->next;
    node* prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        node* next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}

int main(){



    std::cin.get();
}