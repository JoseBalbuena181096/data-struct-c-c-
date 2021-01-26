#include<iostream>

int factorial_recursive(int n){
    if(n==0)
        return 1;
    return factorial_recursive(n-1)*n;
}

int factorial_loop(int n){
    int i,factorial=1;
    for(i=1;i<=n;i++)
        factorial*=i;
    return factorial;
}
int main(){
    std::cout<<"Recursive factorial "<<std::endl;
    std::cout<<factorial_recursive(5)<<std::endl;
    std::cout<<"Loop factorial "<<std::endl;
    std::cout<<factorial_loop(5)<<std::endl;
    return 0;
}