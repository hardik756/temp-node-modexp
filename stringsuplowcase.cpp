#include<iostream>
void change(std::string s,std::string op){

//aagar reference se pass karu to error kyu aa raha hai ?

    if(s.length()==0){
        std::cout<<op<<std::endl;
        return;
    }

    if(isalpha(s[0])){

    std::string op1=op;
    std::string op2=op;
    op1.push_back(tolower(s[0]));
    op2.push_back(toupper(s[0]));
    //instead of s[0]-32 you can write toupper(s[0]);
    s.erase(s.begin()+0);
    change(s,op1);
    change(s,op2);
    }
    else{
        std::string op1=op;
        op1.push_back(s[0]);
        s.erase(s.begin()+0);
        change(s,op1);
    }

}

int main(){

    std::string st,op;
    std::cin>>st;
    op="";
    change(st,op);

    std::cin.get();
}