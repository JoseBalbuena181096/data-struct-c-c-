/*
The head recursion is the recursion where the first 
sentence executed is the call to the recursion funtion.
-------------------------------------------------------
It better convert a head recursion to loop , because both funtion
has the same time complexity O(n), the diferece is in the   space 
complexity the loop has a space complexity of O(1) and the recursive funtion
has the O(n) space complexity
*/
#include<stdio.h>

void fun_recs(int n){
    if(n>0){
        fun_recs(n-1);
        printf("%d ",n);
    }
}
void fun_loop(int n){
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
}

int main(){
    fun_recs(5);
    printf("\n");
    fun_loop(5);
    return 0;
}