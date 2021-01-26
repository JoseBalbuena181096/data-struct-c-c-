#include<iostream>

double e(int x,int n){
    static double pow = 1,factorial = 1;
    double r;
    if (n==0)
        return 1;
    r = e(x,n-1);
    pow *=x;
    factorial *= n;
    return r+pow/factorial;
}
int main(){
    std::cout<<e(2,100)<<std::endl;
    return 0;
}