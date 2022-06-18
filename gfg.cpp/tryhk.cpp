#include <bits/stdc++.h>
using namespace std;
string getPhoneNumber(string s) {
    string phn;
    string t;
    int i=0;
    int k=1;
    while(s[i]!='\0'){
        while(s[i]!=' ' && s[i]!='\0'){
            t.push_back(s[i]);
            i++;
        }
        if(s[i]!='\0'){
            i--;
        }
        if(t=="one"){
            for(int j=0;j<k;j++){
                phn.push_back('1');
            }
            t={};
            k=1;
            i++;
        }      
        else if(t=="two"){
            for(int j=0;j<k;j++){
                phn.push_back('2');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="three"){
            for(int j=0;j<k;j++){
                phn.push_back('3');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="four"){
            for(int j=0;j<k;j++){
                phn.push_back('4');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="five"){
            for(int j=0;j<k;j++){
                phn.push_back('5');
            }
            t={};
            k=1;
            i++;
        }
        
        
        else if(t=="six"){
            for(int j=0;j<k;j++){
                phn.push_back('6');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="seven"){
            for(int j=0;j<k;j++){
                phn.push_back('7');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="eight"){
            for(int j=0;j<k;j++){
                phn.push_back('8');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="nine"){
            for(int j=0;j<k;j++){
                phn.push_back('9');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="zero"){
            for(int j=0;j<k;j++){
                phn.push_back('0');
            }
            t={};
            k=1;
            i++;
        }
        else if(t=="double"){
            k=2; 
            t={};
            i++;                       
        }
        else{ 
            k=3;
            t={};
            i++;
        }            
    }
    return phn;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin, s);
    string result = getPhoneNumber(s);
    fout << result << "\n";
    fout.close();
    return 0;
}
