#include<iostream>

template<class T>
class CircularQueue
{
    private:
        int front;
        int rear;
        int size;
        T *Q;
    public:
        CircularQueue(int size);
        bool isEmpty();
        bool isFull();
        void enqueue(T data);
        T dequeue();
        void display();
};

template<class T>
CircularQueue<T>::CircularQueue(int size)
{
    front = rear = 0;
    this->size = size;
    Q = new T[size];  
}
template<class T>
bool CircularQueue<T>::isEmpty()
{
    return true ? front == rear : false;    
}

template<class T>
bool CircularQueue<T>::isFull()
{
    return true ? (rear+1)%size == front : false;
}

template<class T>
void CircularQueue<T>::enqueue(T data)
{
    if(this->isFull())
        std::cout<<"The Queue is overflow\n";
    else
        {
            rear = (rear+1)%size;
            Q[rear] = data;
        }
}

template<class T>
T CircularQueue<T>::dequeue()
{
    T data = -1;
    if (this->isEmpty())
        std::cout<<"The queue is underflow\n";
    else
        front = (front+1)%size;
        data = Q[front];
    return data;
}

template<class T>
void CircularQueue<T>::display()
{
    int i = front+1;
    std::cout<<"[";
    do
    {
        std::cout<<Q[i]<<",";
        i = (i+1)%size;

    }while(i != (rear+1)%size);
    std::cout<<"]\n";
}


int main()
{
    CircularQueue<int> q(10);
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