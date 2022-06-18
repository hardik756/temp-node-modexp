#include<iostream>
#include<string>
#include<vector>

std::ostream& operator<<(std::ostream& stream,std::vector<std::string>& other){
    for(int i=0;i<other.size();i++){
        stream<<other[i]<<std::endl;
    }
    return stream;
}

void generate(int open,int close,std::string op,std::vector<std::string>& s){

    if(open==0 && close==0){
        s.push_back(op);
        return;
    }
    if(open!=0){
        std::string op1=op;
        op1.push_back('(');
        generate(open-1,close,op1,s);
    }
    if(open<close){
        std::string op2=op;
        op2.push_back(')');
        generate(open,close-1,op2,s);
    }
}

int main(){

    int n;
    std::cin>>n;
    int open=n;
    int close=n;
    std::vector<std::string> s;
    std::string op={""};
    generate(open,close,op,s);
    std::cout<<s<<std::endl;
    std::cin.get();
    
}