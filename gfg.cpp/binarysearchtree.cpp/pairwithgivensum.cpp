#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<map>

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

bool pairfound(node* root,int sum,std::unordered_set<int>s){
    if(root==NULL){
        return false;
    }
    if(pairfound(root->left,sum,s)){
        return true;
    }
    if(s.find(sum-root->data)!=s.end()){
        return true;
    }
    else{
        s.insert(root->data);
    }
    return pairfound(root->right,sum,s);
}

void vsumr(node* root,int hd,std::map<int,int>m){
    if(root==NULL){
        return;
    }
    vsumr(root->left,hd-1,m);
    m[hd]+=root->data;
    vsumr(root->right,hd+1,m);
}

void vsum(node*root){
    std::map<int,int>m;
    vsumr(root,0,m);
    for(auto sum:m){
        std::cout<<sum.second<<" ";
    }
}

int main(){



    std::cin.get();
}