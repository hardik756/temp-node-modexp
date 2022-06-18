#include<iostream>
#include<unordered_map>

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

node* begininsert(node* head,int x){
    node* curr=new node(x);
    head->prev=curr;
    curr->next=head;
    return curr;
}

node* kthnodedelete(node* head,node* temp){

}

node* endinsert(node* head,node* tail,int x){
    node* temp=new node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    tail->next=temp;
    temp->prev=tail;
    temp->next=head;
    head->prev=tail;
    return  head;
}


node* cachedesign(node* head, node* tail,int x){

    node* temp=new node(x);
    node* curr=head;
    std::unordered_map<int,node*>s;
    if(s.find(x)!=s.end()){
        head=kthnodedelete(head,temp);
        head=begininsert(head,x);
        s.erase(x);
        s.insert({x,head});
        
    }
    if(s.find(x)==s.end()){
        s.insert({x,temp});
        head=endinsert(head,tail,x);
    }
}


int main(){




    std::cin.get();
}