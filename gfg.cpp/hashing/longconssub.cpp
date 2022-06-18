#include<iostream>
#include<unordered_set>

int count(int arr[],int n){
    std::unordered_set<int>s;
    int res=1,count=1;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }
        else {
            for(int j=1;j<s.size();j++){
                if(s.find(arr[i]+j)!=s.end()){
                count++;
                }
                else{
                    res=std::max(count,res);
                    count=1;
                    break;
                }
            }
        }
    }
    return std::max(count,res);    
}
/*even it seem to have two nested for loops but it works in O(n)bcoz it
 does 2n lookups in total and hence big O of n*/

int main(){

    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<count(arr,n);

    std::cin.get();
}