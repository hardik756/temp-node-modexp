#include<iostream>
#include<string>

void solve(std::string ip,std::string op){

    if(ip.length()==0){
        std::cout<<op<<std::endl;
        return;
    }
    std::string op1,op2;
    op1=op;
    op2=op;
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}

int main(){

std::string ip,op;
std::cin>>ip;
op="";
op.push_back(ip[0]);
ip.erase(ip.begin()+0);
solve(ip,op);

    std::cin.get();
}
