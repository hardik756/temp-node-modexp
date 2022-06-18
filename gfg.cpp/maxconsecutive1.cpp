#include<iostream>
int count(std::string& s){
    int res=0,count=0;
    for(int i=0;i<s.length();i++){
    if(s[i]!='1'){
        res=std::max(res,count);
        count=0;
        continue;
    }
    count++;
    }
    return res;
}

int main(){

    std::string s;
    std::cin>>s;
    std::cout<<count(s);

    std::cin.get();
}