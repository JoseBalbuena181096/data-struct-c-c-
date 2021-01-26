#include<iostream>

int Ifibo(int n){
    int s=0,t1=1,t0=0,i;
    if(n<=1)
        return n;
    for(i=2;i<n;i++){
        s = t0+t1;
        t0 = t1;
        t1 = s;  
    }
    return s;
}
int Rfibo(int n){
    if(n<=1)
        return n;
    return Rfibo(n-2)+Rfibo(n-1);
}
int F[10];
int ORfibo(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2] = ORfibo(n-2);
        if(F[n-1]==-1)
            F[n-1] = ORfibo(n-1);
        F[n] = F[n-2] + F[n-1]; 
        return F[n];
    }
    return 0;
}
int main(){
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    for(int i=0;i<10;i++){
        std::cout<<ORfibo(i)<<" ";
    }
    std::cout<<"\n";
    return 0;
}