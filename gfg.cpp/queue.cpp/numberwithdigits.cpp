#include<iostream>
#include<stack>
#include<queue>
#include<string>

void generate(int n){
    std::queue<std::string>q;
    q.push("5");
    q.push("6");
//single quotes use nahi kar sakte kyuki single quote matlab hota h 
//char aur apan yaha string use kar rahe h
// q.push({'4','\0'}); can be used because it is string hence using single
// quotes
    
    while(n>=0){
        std::string str;
        str=q.front();
        std::cout<<str<<" ";
        q.pop();
        q.push(str+'5');
        q.push(str+'6');
        n--;
    }
}

int main(){

    int n;
    std::cin>>n;
    generate(n);

    std::cin.get();
}