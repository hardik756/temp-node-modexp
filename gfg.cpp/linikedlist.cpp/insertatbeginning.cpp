#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>

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
node* insertbegin(node* head,int x){
    node* temp=new node(x);
    temp->next=head;
    return temp;
}
void printnthnodefromend(node* head,int n){
//maintain rwo pointer and move first pointer to n+1 node and then move them
//one position at a time until the first node reaches the null position
    if(head==NULL){
        return ;
    }
    node* curr=head,*second=head;
    for(int i=0;i<n;i++){
        if(curr==NULL){
            return;
        }
        curr=curr->next;
    }
    while(curr!=NULL){
        curr=curr->next;
        second=second->next;
    }
    std::cout<<second->data<<std::endl;    
}
node* revlinkedlistnaive(node* head){
    std::vector<int>v;
    node* curr=head;
    while(curr!=NULL){
        v.push_back(curr->data);
        curr=curr->next;
    }
    curr=head;
    while(curr!=NULL){
        curr->data=v.back();
        v.pop_back();
        curr=curr->next;
    }
    return head;
}
node*  revlinkedlistefficient(node* head){
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

node* removesameelementsorted(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            node* temp=curr->next;
            curr->next==curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
}

node*reverseingroups(node* head,int k){
    node* curr=head;
    node* prev=NULL,*next=NULL;
    int count=0;
    while(curr->next!=NULL||count!=k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(curr!=NULL){
        node* resthead=reverseingroups(next,k);
        head->next=resthead;
    }
    return prev;
    
}

node* iterativerevrseingrps(node*head,int k){
        node* curr=head;
        node* prevfirst=NULL;

        bool istrue=true;
        while(curr!=NULL){
            node*first=curr,* prev=NULL;
            int count=0;
            while(curr!=NULL && count<k){
                node* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
            if(istrue){
                head=prev;
                istrue=false;
            }
            else{
                prevfirst->next=prev;
            }
            prevfirst=first;
        }
        return head;        
    }

node* recrev(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node* rev_head=recrev(head->next);
    node* rev_tail=head->next;
    rev_tail->next=head;
    head->next=NULL;
    return rev_head;
}

void loopdetector(node* head){
    std::unordered_set<node*>s;
    node* curr=head;
    while(curr!=NULL){
        if(s.find(curr)!=s.end()){
            std::cout<<"YES\n";
            return;
        }
        s.insert(curr);
    }
    std::cout<<"NO\n";
}

node* mergesortlinkedlist(node* h1,node*h2){
    node* head=NULL;
    node* tail=NULL;
    node*a=h1,*b=h2;
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }
    if((a->data)>(b->data)){
        head=b;
        tail=b;
        b=b->next;
    }
    else{
        head=a;
        tail=a;
        a=a->next;
    }
    while(a!=NULL && b!=NULL){
        if((a->data)<(b->data)){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL){
        tail->next=b;
    }
    else{
        tail->next=a;
    }
    return head;

}

int main(){
    node* head=NULL;
    head=insertbegin(head,30);
    head=insertbegin(head,20);
    head=insertbegin(head,40);
    print(head);
    std::cin.get();
}