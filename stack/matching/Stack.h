
#ifndef _STACK_H__
#define _STACK_H__

template<class T>
class Stack
{
    private:
        int size;
        int top;
        T* S;
    public:
        Stack(int size);
        bool isFull();
        bool isEmpty();
        T Top();
        void Push(T data);
        T Pop();
        T Peek(int index);
        void Display();
};
#include"Stack.cpp"
#endif