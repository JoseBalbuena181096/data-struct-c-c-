#include<iostream>

template<class T>
class Node
{
    public:
        T data;
        Node<T> *next;
};

template<class T>
class Stack
{
    private:
        Node<T> *top;
        int lenght;
    public:
        Stack();
        bool isFull();
        bool isEmpty();
        void Push(T data);
        void Display();
        T Pop();
        T Peek(int index);
};

template<class T>
Stack<T>::Stack()
{
    top = NULL;
    lenght = 0;
}

template<class T>
bool Stack<T>::isFull()
{
    Node<T> *new_node = new Node<T>;
    bool value = (new_node == NULL)?true:false;
    delete new_node;
    return value;
}

template<class T>
bool Stack<T>::isEmpty()
{
    return (top == NULL)?true:false;
}

template<class T>
void Stack<T>::Push(T data)
{
    Node<T> *new_node = new Node<T>;
    if(new_node==NULL)
        std::cout<<"The stack is overflow\n";
    else
    {
        new_node->data = data;
        new_node->next = top;
        top = new_node;
        lenght++;
    }
}

template<class T>
T Stack<T>::Pop()
{
    T temp = -1;
    if(top == NULL)
        std::cout<<"The stack is Empty\n";
    else
    {
        Node<T> *aux = top;
        temp = top->data;
        top = top->next;
        delete aux;
        lenght--;
    }
    return temp;
}

template<class T>
void Stack<T>::Display()
{
    Node<T> *p = top;
    std::cout<<"[";
    while(p!=NULL)
    {
        std::cout<<p->data<<",";
        p = p->next;
    }
    std::cout<<"]\n";
}

template<class T>
T Stack<T>::Peek(int index)
{
    Node<T> *p = top;
    for(int i=0;p!=NULL && i<index-1;i++)
        p = p->next;
    if(p==NULL)
        return -1;
    else
        return p->data;
}

template<class T>
class Queue
{
    private:
        Stack<T> stk1,stk2;
    public:
        void enqueue(T data);
        T dequeue();

};

template<class T>
void Queue<T>::enqueue(T data)
{
    stk1.Push(data);
}

template<class T>
T Queue<T>::dequeue()
{
    T data = -1;
    if(stk2.isEmpty())
    {
        if(stk1.isEmpty())
        {
            std::cout<<"Queue empty\n";
            return data;
        }
        else
        {
            stk1.Display();
            while(!stk1.isEmpty())
                stk2.Push(stk1.Pop());
            stk2.Display();
        }
    }
    return stk2.Pop();
}


int main()
{
    Queue<int> q;
    for(int i=0;i<5;i++)
        q.enqueue(i);
    std::cout<<q.dequeue();
    return 0;
}