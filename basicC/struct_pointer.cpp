#include<iostream>
#include<stdlib.h>
int main(){
    struct Rectangle{
        int length;
        int breadth;
    };
    Rectangle *r = (Rectangle*)malloc(sizeof(Rectangle));
    r->breadth = 10;
    r->length = 12;
    std::cout<<r->length;  
    return 0;
}