#include<iostream>
int main(){

    unsigned int a=5;
    signed int b=5;
    std::cout<<~a<<~b;

    std::cin.get();
}
//unsigned bit means either the no is positive or zero.
//in case of signed bit , if the msb bit is zero it corresponds to 
//positive no or else negative no. In this condition last bit is considered
//to find if the no is positive or negative