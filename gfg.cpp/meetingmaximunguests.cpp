#include<iostream>
#include<algorithm>

int  maxguestcount(int arv[],int dep[],int n){
    std::sort(arv,arv+n);
    std::sort(dep,dep+n);
    int i=1,j=0,res=1,count=1;
    while(i<n && j<n){
        if(arv[i]<=dep[j]){
            i++;
            count++;
        }
        else{
            j++;
            count--;
        }
        res=std::max(res,count);
    }
    return res;
}

int main(){

    int n;
    std::cin>>n;
    int arv[n],dep[n];
    for(int i=0;i<n;i++){
        std::cin>>arv[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>dep[n];
    }
    std::cout<<maxguestcount(arv,dep,n);

    std::cin.get();
}