#include<stdio.h>
void fun1(int n){
    if(n>0){
        printf("%d, ",n);
        fun1(n-1);
    }
    printf("\n");
}
void fun2(int n){
    if(n>0){
        fun1(n-1);
        printf("%d, ",n);
    }
    printf("\n");
}
int main(){
    fun1(4);
    fun2(4);
    return 0;
}