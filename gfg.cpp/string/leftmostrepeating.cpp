#include<iostream>
#include<string>
int leftrepeat(const std::string& s){
    int count[256]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]>1){
            return i;
        }
    }
    return -1;
}
int optimizedleftrepeat(const std::string& s){
    bool arr[256];
    std::fill(arr,arr+256,false);
    int res=-1;
    for(int i=s.length()-1;i>-1;i++){
        if(arr[s[i]]){
            res=i;
        }
        else{
            arr[s[i]]=true;
        }
    }
    return res;
}

int main(){

    std::string s;
    std::cin>>s;
    std::cout<<leftrepeat(s);

    std::cin.get();
}