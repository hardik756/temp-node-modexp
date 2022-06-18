#include<iostream>
#include<map>
#include<set>

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

bool bstcheck(node* root,int min,int max){
//initially min and max are + and - infinite
    if(root==NULL){
        return true;
    }
    return (root->key>min && root->key<max);
    bstcheck(root->left,min,root->key);
    bstcheck(root->right,root->key,max);
}

int main(){



    std::cin.get();
}