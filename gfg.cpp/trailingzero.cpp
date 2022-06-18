#include<iostream>
#include<math.h>
int main(){

    int n;
    std::cin>>n;
    int count=log(n)+1;
    int sum=0;
    for(int i=0;i<count;i++){

        static int k=5;
        sum=sum+n/k;
        k=k*5;
    }
    std::cout<<sum<<std::endl;
    

    std::cin.get();
}