#include<iostream>


int fac(int n){
    if(n<=1)
        return 1;
    return fac(n-1)*n;
}
int nCr(int n,int r){
    int num,den;
    num = fac(n);
    den = fac(r)*fac(n-r);
    return num/den;
}
int NCR(int n,int r){
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}

int main(){
    std::cout<<NCR(5,3);
    return 0;
}