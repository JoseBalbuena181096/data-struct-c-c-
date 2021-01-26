#include<iostream>

int main(){
    int a = 10;
    int &r  = a;
    std::cout<<a<<"\n";
    r++;
    std::cout<<a<<"\n";
    std::cout<<r<<"\n";
    return 0;
}