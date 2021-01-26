#include<iostream>
#include<math.h>

template<class T>
class Node
{
    public:
        T coef;
        int exp;
        Node<T> *next;
};

template<class T>
class Polynomial
{
    private:
        Node<T> *poly;
        int deg;
    public:
        Polynomial(T A[],int deg);
        void Display();
        T Eval(T x);
};
template<class T>
Polynomial<T>::Polynomial(T A[],int deg)
{
    poly = NULL;
    this->deg = deg;
    for(int i=0;i<=this->deg+1;i++)
    {
        Node<T> *new_node = new Node<T>;
        new_node->coef = A[i];
        new_node->exp = deg--;
        if(poly==NULL)
        {
            new_node->next = NULL;
            poly = new_node;
        }
        else
        {
            Node<T>* p = poly;
            while(p->next!=NULL)
                p = p->next;
            p->next = new_node;
            new_node->next = NULL;
        }
    }
}

template<class T>
void Polynomial<T>::Display()
{
    Node<T>* p = poly;
    while(p->next!=NULL)
    {
        if(p->exp!=0)
            std::cout<<p->coef<<"x"<<"^"<<p->exp<<" + ";
        else 
            std::cout<<p->coef<<std::endl;
        p = p->next;
    }
}

template<class T>
T Polynomial<T>::Eval(T x)
{
    T sum = 0;
    Node<T> *p = poly;
    while (p->next!=NULL)
    {
        sum += p->coef*pow(x,p->exp);
        p = p->next;
    }
    return sum;
}

int main()
{
    int A[4]={1,3,1,1};
    Polynomial<int> p(A,3);
    p.Display();
    std::cout<<p.Eval(3)<<"\n";
    return 0;
}