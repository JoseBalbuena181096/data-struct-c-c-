/*
The recursion tree has the exponential complexity
if the funtion recursive is called two time in the same funtion 
the  time complexity is O(2^n) ande the space is O(n)
*/

#include<iostream>

void fun_recs(int n){
    if(n>0){
        std::cout<<n<<" ";
        fun_recs(n-1);
        fun_recs(n-1);
    }
}

int main(){
    fun_recs(20);
    return 0;
}