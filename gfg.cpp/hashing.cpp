#include<iostream>
#include<list>
#include<algorithm>

struct myhash{
int bucket;
std::list<int>*table;
    myhash(int b){
        bucket=b;
    table=new std::list<int>[b];
    }
    void insert(int key){
        int i=key % bucket;
        table[i].push_back(key); 
    }
    void deleting(int key){
        int i=key%bucket;
        table[i].remove(key);
    }

    bool search(int key){
        int i=key%bucket;
        for(auto x:table[i]){
            if(x==key){
                return true;
            }
        }
        return false;
    }
};

int main(){

    int n,b;
    std::cin>>n>>b;
    int arr[n];
    myhash e(b);
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        e.insert(arr[i]);
    }
    std::cout<<e.search(56)<<std::endl;
    std::cout<<e.search(72)<<std::endl;
    e.deleting(56);
    std::cout<<e.search(56)<<std::endl;
    std::cout<<e.search(72)<<std::endl;

    std::cin.get();
}