#include<iostream>

struct Rectangle{
    int length;
    int breadth;
};

void init_rectangle(Rectangle *r,int length,int breadth){
    r->length = length;
    r->breadth = breadth;
}
int area_rectangle(Rectangle r){
    return r.breadth*r.length;
}
void change_breadth(Rectangle *r,int breadth){
    r->breadth = breadth;
}
void print_rectangle(Rectangle r){
    std::cout<<"b :"<<r.breadth<<"\n";
    std::cout<<"l :"<<r.length<<"\n";
}
int main(){
    Rectangle r;
    init_rectangle(&r,2,4);
    print_rectangle(r);
    std::cout<<area_rectangle(r)<<std::endl;
    change_breadth(&r,5);
    print_rectangle(r);
    return 0;
}