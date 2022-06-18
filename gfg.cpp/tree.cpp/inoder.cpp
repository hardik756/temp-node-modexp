#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>
#include<memory>

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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return std::max(height(root->left),height(root->right))+1;
    }
}

void levelordertraversal(node* root){
    if(root==NULL){
        return;
    }
    std::queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        node*curr=q.front();
        q.pop();
        std::cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);    
        }
    }  
}

void levelordertraversallinebyline(node* root){
    if(root==NULL){
        return;
    }
    std::queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node* curr=q.front();
        q.pop();
        if(curr==NULL){
            std::cout<<"\n";
            q.push(NULL);
            continue;
        }
        std::cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }

}

int sizeoftree(node* root){
    if(root==NULL){
        return 0;
    }
    return sizeoftree(root->left)+sizeoftree(root->right)+1; 
}

void kthnodedis(node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        std::cout<<root->key<<" ";
        return;
    }
    kthnodedis(root->left,k-1);
    kthnodedis(root->right,k-1);
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    std::cout<<root->key<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    std::cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}

int maxlevel=0;
void printleft(node* root,int level){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        std::cout<<root->key<<" ";
        maxlevel=level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);
}

void printleftview(node* root){
    printleft(root,1);    
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    std::cout<<root->key<<" ";
}

bool childrensumvalue(node* root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->key;
    }
    if(root->right!=NULL){
        sum+=root->right->key;
    }
    return(root->key==sum && childrensumvalue(root->left) && childrensumvalue(root->right));
}

bool heightbalancednaive(node* root){
    if(root==NULL){
        return true;
    }
    int lh= height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && heightbalancednaive(root->left) && heightbalancednaive(root->right));   
}

int heightbalancedbetter(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=heightbalancedbetter(root->left);
    if(lh==-1){
        return -1;
    }
    int rh=heightbalancedbetter(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return std::max(lh,rh)+1;
}

int maxwidth(node* root){
    if(root==NULL){
        return 0;
    }
    std::queue<node*>q;
    q.push(root);
    q.push(NULL);
    int res=1;
    int count=0;
    while(q.size()>1){
        node* curr=q.front();
        q.pop();
        count++;
        if(curr==NULL){
            res=std::max(res,count);
            count=0;
            q.push(NULL);
            continue;
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    return res;
}

int maxi(node* root){
    if(root==NULL){
        return INT_MIN;
    }
    return std::max(root->key, std::max(maxi(root->left),maxi(root->right)));
}
    node* prev=NULL;
node* dllconversion(node* root){
    if(root==NULL){
        return root;
    }
    if(root->left==NULL && root->right==NULL){
        return root;
    }
    node* head=dllconversion(root->left);
    if(prev==NULL){
        head==root;
    }
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    dllconversion(root->right);
    return head;
}

int preindex=0;
node* binarytreefrominodpreod(int in[],int pre[],int is,int re){
//in is starting index and re is end index
    if(is>re){
        return NULL;
    }
    node*root=new node(pre[preindex++]);
    int inindex;
    for(int i=is;i<=re;i++){
        if(in[i]==root->key){
            inindex=i;
            break;
        }
        root->left=binarytreefrominodpreod(in,pre,is,inindex-1);
        root->right=binarytreefrominodpreod(in,pre,inindex+1,re);
        return root;
    }
    
}

void treetravinspiralform(node* root){
    if(root==NULL){
        return;
    }
    std::stack<node*>s1,s2;
    s1.push(root);
    while(!s1.empty() && !s2.empty()){
        while(!s1.empty()){
            node* curr=s1.top();
            s1.pop();
            std::cout<<curr->key<<" ";
            if(curr->left!=NULL){
                s2.push(curr->left);
            }
            if(curr->right!=NULL){
                s2.push(curr->right);
            }
        }
        while(!s2.empty()){
            node* curr=s2.top();
            s2.pop();
            std::cout<<curr->key<<" ";
            if(curr->right!=NULL){
                s1.push(curr->right);
            }
            if(curr->left!=NULL){
                s1.push(curr->left);
            }
        }
    } 
}

int diameter=0;
int diaheight(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=diaheight(root->left);
    int rh=diaheight(root->right);
    diameter=std::max(diameter,lh+rh+1);
    return(1+std::max(lh,rh));
}

bool findpath(node* root,int n,std::vector<node*>&p){
    if(root==NULL){
        return false;
    }
    p.push_back(root);
    if(root->key==n){
        return true;
    }
    if(findpath(root->left,n,p)||findpath(root->right,n,p)){
        return true;
    }
    p.pop_back();
    return false;
}

node* LCA1(node* root,int n,int m){
    std::vector<node*>p,q;
    if(findpath(root,n,p)==false || findpath(root,m,q)==false){
        return NULL;
    }  
    for(int i=0;i<p.size()-1 && i<q.size()-1;i++){
        if(p[i+1]!=q[i+1]){
            return p[i];
        }
    }  
    return NULL;
}

node* LCA2(node* root, int n,int m){
    if(root==NULL){
        return NULL;
    }
    if(root->key==n || root->key==m){
        return root;
    }
    node* lcaf=LCA2(root->left,n,m);
    node* lcae=LCA2(root->right,n,m);
    if(lcaf!=NULL && lcae!=NULL){
        return root;
    }
    if(lcaf!=NULL){
        return lcaf;
    }
    else{
        return lcae;
    }
}
int res=0;
int burntime(node* root,int leaf,int& dist){
    if(root==NULL){
        return 0;
    }
    if(root->key==leaf){
        dist=0;
        return 1;
    }
    int ldist=-1,rdist=-1;
    int lh=burntime(root->left,leaf,dist);
    int rh=burntime(root->right,leaf,dist);
    if(ldist!=-1){
        dist=ldist+1;
        res=std::max(res,dist+rh);
    }
    else if(rdist!=-1){
        dist=rdist+1;
        res=std::max(res,dist+lh);
    }
    return std::max(lh,rh)+1;
}

int countnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
}

int main(){

    node* root=new node(20);
    root->left=new node(8);
    root->right=new node(12);
    root->left->left=new node(6);
    root->left->right=new node(2);
    root->right->right=new node(15);
    // kthnodedis(root,2);
    // std::cout<<maxwidth(root);
    std::cout<<countnodes(root);
    std::cin.get();
}