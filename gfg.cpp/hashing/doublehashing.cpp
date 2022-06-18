#include<iostream>
#include<list>

class doubhash{
    public:
    int *arr;
    int cap,size;
    doubhash(int c){
        cap=c;
        size=0;    
    }
    int hash(int key){
        return key%cap;
    }
    bool search(int key){
        int h=hash(key);
        int i=h;
        while(arr[i]!=key || arr[i]!=-1){
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        if(arr[i]==key){
            return true;
        }
        else{
            return false;
        }
        
    }
    bool insert(int key){
        if(size==cap){
            return false;
        }
        int i=hash(key);
        while(arr[i]!=key && arr[i]!=-1 && arr[i]!=-2){
            i=(i+1)%cap;
        }
        if(arr[i]==key){
            return false;
        }
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool erase(int key){
        int h=hash(key);
        int i=h;
       while(arr[i]!=key && arr[i]!=-1){
            i=(i+1)%cap;
            if(i==h){
                return false;
            }
        }
        if(arr[i]==key){
            arr[i]=-2;
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){

    int n,b;
    std::cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }



    std::cin.get();
}