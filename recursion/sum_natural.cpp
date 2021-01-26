#include<iostream>

int sum_recursion(int n){
    if(n==0)
        return 0;
    return sum_recursion(n-1)+n;
}
int sum_loop(int n){
    int sum=0,i=0;
    for(i=1;i<=n;i++)
        sum+=i;
    return sum;
}
int sum_equation(int n){
    return n*(n+1)/2;
}

int main(){
    std::cout<<"Recursion sum "<<std::endl;
    std::cout<<sum_recursion(10)<<std::endl;
    std::cout<<"Loop sum "<<std::endl;
    std::cout<<sum_loop(10)<<std::endl;
    std::cout<<"Equation sum "<<std::endl;
    std::cout<<sum_equation(10)<<std::endl;
    return 0;
}