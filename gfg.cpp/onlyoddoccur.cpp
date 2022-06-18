#include<iostream>
#include<vector>

int main(){

    std::vector<int> v;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int k;
        std::cin>>k;
        v.push_back(k);
    }
    
    static int a=0;
    for(int i=0;i<n;i++){
        a=a^v[i];
    }
    std::cout<<a<<std::endl;


    std::cin.get();
}