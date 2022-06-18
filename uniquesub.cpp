#include<iostream>
#include<string>

void solve(std::string ip,std::string op){

    if(ip.length()==0){
        std::cout<<" ";
        return;
    }
    std::string op1,op2;
    op1=op;
    op2=op;
    op2.push_back(ip[0]);


}

int main(){

    std::string ip,op;
    std::cin>>ip;
    op="";
    solve(ip,op);

    std::cin.get();
}