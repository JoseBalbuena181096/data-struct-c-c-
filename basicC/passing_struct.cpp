//Note the array passing by value is a copy 
#include<iostream>
struct Rectangle{
    int lenght;
    int breadth;
};
struct data{
    int n[5];
    int size;
};
//passing struct by value
int struct_by_value(Rectangle r){
    return r.lenght*r.breadth; 
}
//passing struct by reference 
void struct_by_reference(Rectangle &r){
    r.breadth++;
    r.lenght++;
}
//passing struct by address
void struct_by_address(Rectangle *r){
    r->breadth++;
    r->lenght++;
}
void print_rectangle(Rectangle r){
    std::cout<<"b :"<<r.breadth<<"\n";
    std::cout<<"l :"<<r.lenght<<"\n";
}

void fun_data(data d){
    for(int i=0;i<d.size;i++){
        d.n[i]=i+2;
    }
}
void fun_data2(data &d){
    for(int i=0;i<d.size;i++){
        d.n[i]=i+2;
    }
}
void print_data(data d){
    for(int i=0;i<d.size;i++){
        std::cout<<d.n[i]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    Rectangle rectangle={2,4};
    data dt = {{1,2,3,4,5},5};
    std::cout<<"area is "<<struct_by_value(rectangle)<<"\n";
    struct_by_address(&rectangle);
    print_rectangle(rectangle);
    struct_by_reference(rectangle);
    print_rectangle(rectangle);
    fun_data(dt);
    print_data(dt);
    fun_data2(dt);
    print_data(dt);
    return 0;
}