/*
Tylor series with the rule  Horners rule
*/
#include<iostream>
//serie taylor iterative 
double Ie(int x,int n){
    double  s;
    for(;n>0;n--){
        s = 1+(x*s/n);
    }
    return s;
}
//serie tylor recursive
double e(int x,int n){
    static double s;
    if(n==0)
        return s;
    s = 1+(x*s/n);
    return e(x,n-1); 
}
int  main(){
    std::cout<<Ie(1,10)<<"\n";
    std::cout<<e(1,10)<<"\n";
    return 0;
}