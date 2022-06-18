#include<iostream>
void generate(std::string s,std::string op){

    if(s.length()==0){
        std::cout<<op<<std::endl;
        return;
    }
    std::string op1,op2;
    op1=op;
    op2=op;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    generate(s,op1);
    generate(s,op2);
    
}

int main(){

    std::string s,op;
    std::cin>>s;
    op="";
    generate(s,op);
    std::cin.get();
}