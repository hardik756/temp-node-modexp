#include<iostream>
#include<string>

bool checksub(std::string s,std::string d){
    int i=0,j=s.length()-1;
    for(int h=0;h<s.length();h++){
        if(d[0]==s[h]){
            d.erase(d.begin()+0);
        }
    }
    return (d.length()==0);
}
void rec_sol(std::string s,std::string d,std::string ip){
    if(s.length()==0){
        if(ip==d){
            std::cout<<"yes\n";
        }
        return;
    }
    std::string op1,op2;
    op1=ip;
    op2=ip;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    rec_sol(s,d,op1);
    rec_sol(s,d,op2);
}

int main(){

    std::string s,d;
    std::cin>>s>>d;
    //std::cout<<checksub(s,d)<<std::endl;
    rec_sol(s,d,"");
    std::cin.get();
}