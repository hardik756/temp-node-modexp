#include<iostream>
#include<string>
bool anagram(std::string& s1,std::string& s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int arr[256]={0};
    for(int i=0;i<s1.length();i++){
        arr[s1[i]]++;
        arr[s2[i]]--;
    }
    for(int i=0;i<s1.length();i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){

    std::string s1,s2;
    std::cin>>s1>>s2;
    std::cout<<anagram(s1,s2);
    std::cin.get();
}