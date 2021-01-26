/*
The tail recursion is the recursion where the last 
sentence executed is the call to the recursion funtion.
-------------------------------------------------------
It better convert a tail recursion to loop , because both funtion
has the same time complexity O(n), the diferece is in the   space 
complexity the loop has a space complexity of O(1) and the recursive funtion
has the O(n) space complexity
*/
#include<iostream>

void fun_recs(int n){
    if(n>0){
        std::cout<<n<<" ";
        fun_recs(n-1);
    }    
}
void fun_loop(int n){
    while(n>0){
        std::cout<<n<<" ";
        n--;
    }
}

int main(){
    fun_recs(5);
    std::cout<<std::endl;
    fun_loop(5);
    return 0;
}