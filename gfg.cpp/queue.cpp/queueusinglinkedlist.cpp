#include<iostream>
#include<stack>
#include<algorithm>

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

class queue{
    node* tail=NULL;
    public:
    int size=0;
    node* enque(node* head,int x){
        node* curr=new node(x);
        if(head==NULL){
            size++;
            return curr;
        }
        if(head->next==NULL){
            size++;
            node* temp=head;
            temp->next=curr;
            temp=temp->next;
            tail=temp;
            return head;
        }
        tail->next=curr;
        tail=tail->next;
        return head;

        
    }
    node* deque(node* head){
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            tail=NULL;
            return NULL;
        }
        node*temp=head;
        head=head->next;
        size--;
        delete temp;
        return head;
    }
    int size(){
        return size;
    }
    node* getfront(node* head){
        return head;
    }

    node* getrear(node* head){
        return tail;
    }
    bool isempty(node* head){
        return (head==NULL);
    }


};

int main(){



    std::cin.get();
}