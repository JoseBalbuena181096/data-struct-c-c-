#include<iostream>
#include"Stack.h"
template<class T>
Stack<T>::Stack(int size)
{
    this->size = size;
    S = new T[size];
    top = -1;
}

template<class T>
bool Stack<T>::isFull()
{
    if(top == size-1)
        return true;
    else
        return false;
}

template<class T>
bool Stack<T>::isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

template<class T>
T Stack<T>::Top()
{
    if(!this->isEmpty())
        return this->Peek(top+1);
    return -1;
}

template<class T>
void Stack<T>::Push(T data)
{
    if(this->isFull())
        std::cout<<"The stack is overflow\n";
    else
        S[++top] = data;
}

template<class T>
T Stack<T>::Pop()
{
    T temp = -1;
    if(this->isEmpty())
        std::cout<<"The stack is underflow\n";
    else
        temp = S[top--];
    return temp;
}

template<class T>
void Stack<T>::Display()
{
    std::cout<<"[";
    for(int i =top;i>=0;i--)
        std::cout<<S[i]<<",";
    std::cout<<"]\n";
}

template<class T>
T Stack<T>::Peek(int index)
{
    T temp = -1;
    if(top-index+1<0)
        std::cout<<"The stack is underflow\n";
    else
        temp = S[top-index+1];
    return temp;
}
