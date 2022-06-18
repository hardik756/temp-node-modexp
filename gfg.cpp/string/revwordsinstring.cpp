#include<iostream>
#include<string>
#include<algorithm>

void revwords(std::string& s){
    std::reverse(s.begin(),s.end());
    int k=0;
    while(k < s.length()){
        int begin=k;
        while(s[k]!=' ' && k<s.length()){
            k++;
        }
        std::reverse(s.begin()+begin,s.begin()+k);
        k++;
    }   
}

int main(){

    std::string s;
    getline(std::cin,s);
    revwords(s);
    std::cout<<s;

    std::cin.get();
}