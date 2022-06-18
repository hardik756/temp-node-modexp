#include<iostream>
#include<unordered_set>
int finalcount(int a[],int b[],int n,int m){
    int res=0;
    std::unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(b[i])!=s.end()){
            res++;
            s.erase(b[i]);
        }
    }
    return res;

}

int main(){

    int n,m;
    std::cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<m;i++){
        std::cin>>b[i];
    }
    std::cout<<finalcount(a,b,n,m);


    std::cin.get();
}