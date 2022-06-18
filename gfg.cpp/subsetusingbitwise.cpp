#include<iostream>
#include<string>
#include<math.h>

int main(){

    std::string s;
    std::cin>>s;
    int a=pow(2,s.length());
    for(int i=0;i<a;i++){
        for(int j=0;j<s.length();j++){
            if(i&(1<<j)!=0){
                std::cout<<s[j];
            }
        }
        std::cout<<"\n";
    }

    std::cin.get();
}