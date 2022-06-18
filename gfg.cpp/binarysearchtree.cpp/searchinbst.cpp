#include<iostream>
#include<vector>
#include<unordered_map>

struct node{
    int key;
    node* left;
    node* right;
    node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};

bool search(node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->key==key){
        return true;
    }
    if(key<root->key){
        return search(root->left,key);
    }
    else {
        return search(root->right,key);
    }
}

node* bstinsert(node*root,int key){
    if(root==NULL){
       return new node(key);
    }
    if(search(root,key)){
        return;
    }

    if(root->key>key){
        root->left=bstinsert(root->left,key);
    }
    else if(root->key<key){
        root->right=bstinsert(root->right,key);
    }
    return root;
}

node* getsuccesor(node* curr){
    curr=curr->right;
    while(curr!=NULL&& curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

node* deletion(node* root,int x){
    if(root==NULL){
        return root;
    }

    if(root->key>x){
        root->left=deletion(root->left,x);
    }

    if(root->key<x){
        root->right=deletion(root->right,x);
    }
    
    else{
        if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }

        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            node* succ=getsuccesor(root);
            root->key=succ->key;
            root->right=deletion(root->right,succ->key);
        }
        return root;
    }
}

int floorbst(node* root,int x){
    if(root==NULL){
        return root->key;
    }
    int mini=x;
    while(root!=NULL){
        if(root->key==x){
            return x;
        }
        else if(root->key>x){
            root=root->left; 
        }
        else{
            mini=root->key;
            root=root->right;
        }
    }
    return mini;    
}

node* ceilbst(node* root, int x){
    if(root==NULL){
        return root;
    }
    node* res=new node(x);
    bool check=true;
    while(root!=NULL){
        if(root->key==x){
            return root;
        }
        else if(root->key>x){
            root=ceilbst(root->left,x);
        }
        else{
            if(check){
              if(root->key>x){
                res=root;
                check=false;
              }
            }
            else{
                if(root->key>x && root->key<res->key){
                    res=root;
                }
            }
                        
           root= ceilbst(root->right,x);
        }
    }
    return res;
}

int main(){


    std::cin.get();
}