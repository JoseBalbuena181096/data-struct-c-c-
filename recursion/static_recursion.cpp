#include<stdio.h>

int funLocal(int n){
    if(n>0){
        return funLocal(n-1)+n;
    }
    return 0;
}
//static int x , is the same result to use a global variable
int funGlobal(int n){
    static int x=0;
    if(n>0){
        x++;
        return funGlobal(n-1)+x;
    }
    return 0;
}

int main(){
    int r = funGlobal(5);
    r = funGlobal(5);
    printf("%d \n",r);
    return 0;
}