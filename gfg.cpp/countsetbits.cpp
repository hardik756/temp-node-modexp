#include<iostream>
void count(int n,int& k){
    //time complexity is O(total bit count) eg 32bit 64bit etc
    while(n>0){
        if(n%2!=0){
            k++;
        }
        n=n>>1;
    }
}
void count2(int n,int& k){
//will take total time of set bit count
//standarized algorithm brian karningam's algorithm.
    while(n>0){
        n=n&(n-1);
        k++;
    }
}

int main(){

    int n;
    std::cin>>n;
    int k=0;
    count(n,k);
    std::cout<<k<<std::endl;

    std::cin.get();
}