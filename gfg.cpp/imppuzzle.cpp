/* this is a normal problem to find gcd or hcf of two numbers, this question
can be modified like find the no of fixed smaller rectangle in a bigger 
rectangle of lengths a and b . note that it can be found using gcd method
and their is an inbuilt function to find gcd i.e.__gcd(int a,int b)
headerfile to be included is algorithm... */
//refernce of the qstn gfg dsa course mathematics section gcd or hcf

#include<iostream>
int gcd(int a,int b){

    if(b==0){
        return a;
    }
    // int bb=std::min(a,b);can be used to find the smaller no of the two
    if(a>b){
       return gcd(b,a%b);
    }
    else{
        return gcd(a,b%a);
    }

}

int main(){

    int a,b;
    std::cin>>a>>b;
    int res=gcd(a,b);
    std::cout<<res<<std::endl;

    std::cin.get();
}