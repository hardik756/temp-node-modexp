#include<iostream>
#include<stack>

bool matching(char c, char d){
    return ((c=='('&& d==')')||(c=='{'&& d=='}')||(c=='['&& d==']'));
}

bool checkbalancedparantheses(std::string& str){

    std::stack<char>s;

    for(char x:str){
        if(x=='('||x=='[' || x=='{'){
            s.push(x);
        }
        else{   
            if(s.empty()==true){
                return false;
            }
            if(matching(s.top(),x)==false){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}

int main(){

    std::string s;
    std::cin>>s;
    std::cout<<checkbalancedparantheses(s);


    std::cin.get();
}