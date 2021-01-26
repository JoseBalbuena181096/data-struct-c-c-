#include<iostream>
//passing by address
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;  
}
//passing by reference
void swap2(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp; 
}
//passing by value
void swap3(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    a=1;
    b=2;
    swap(&a,&b);
    swap2(a,b);
    std::cout<<a<<std::endl;
     std::cout<<b<<std::endl;
    return 0;
}