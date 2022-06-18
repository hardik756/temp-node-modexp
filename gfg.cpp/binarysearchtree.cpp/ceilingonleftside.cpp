#include<iostream>
#include<map>
#include<set>

void ceiling(int arr[],int n){
    std::set<int>s;
    std::cout<<-1<<std::endl;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end()){
            auto it=s.lower_bound(arr[i]);
            std::cout<<*it<<std::endl;
        }
        else{
            std::cout<<-1<<std::endl;
        }
    }

}

int main(){



    std::cin.get();
}