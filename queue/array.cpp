#include<iostream>

template<class T>
class Queue
{
    private:
        int front;
        int rear;
        int size;
        T *Q;
    public:
        Queue(int size);
        bool isEmpty();
        bool isFull();
        void enqueue(T data);
        T dequeue();
        void display();
};

template<class T>
Queue<T>::Queue(int size)
{
    front = rear = -1;
    this->size = size;
    Q = new T[size];  
}
template<class T>
bool Queue<T>::isEmpty()
{
    return true ? front == rear : false;    
}

template<class T>
bool Queue<T>::isFull()
{
    return true ? rear == size-1 : false;
}

template<class T>
void Queue<T>::enqueue(T data)
{
    if(this->isFull())
        std::cout<<"The Queue is overflow\n";
    else
        Q[++rear]=data;
}

template<class T>
T Queue<T>::dequeue()
{
    T data = -1;
    if (this->isEmpty())
        std::cout<<"The queue is underflow\n";
    else
        data = Q[++front];
    return data;
}

template<class T>
void Queue<T>::display()
{
    std::cout<<"[";
    for(int i = front+1;i<=rear;i++)
        std::cout<<Q[i]<<",";
    std::cout<<"]\n";
}


int main()
{
    Queue<int> q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}