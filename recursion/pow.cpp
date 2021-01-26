#include<iostream>

int pow(int m,int n){
    if(n==0)
        return 1;
    return pow(m,n-1)*m;
}
int pow_opt(int m,int n){
    if(n == 0)
        return 1;
    if(n%2==0)
        return pow_opt(m*m,n/2);
    return m*pow_opt(m*m,(n-1)/2);
}

int main(){
    std::cout<<pow(2,3)<<std::endl;
     std::cout<<pow_opt(2,3)<<std::endl;
    return 0;
}