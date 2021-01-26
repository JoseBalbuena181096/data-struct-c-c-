#include<iostream>

class Rectangle{
    private:
        int breadth;
        int length;
    public:
        Rectangle(int l,int b){
            length = l;
            breadth = b;
            }
        int area_rectangle(){
            return breadth*length;
        }
        void change_breadth(int b){
            breadth = b;
        }
        void print_rectangle(){
            std::cout<<"b :"<<breadth<<"\n";
            std::cout<<"l :"<<length<<"\n";
        }
};
int main(){
    Rectangle r(2,4);
    r.print_rectangle();
    std::cout<<r.area_rectangle()<<std::endl;
    r.change_breadth(5);
    r.print_rectangle();
    return 0;
}