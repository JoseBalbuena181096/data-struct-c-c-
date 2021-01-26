#include<iostream>

template<class T>
class Node
{
    public:
        T data;
        Node<T> * next;
};

template<class T>
class Queue
{
    private:
        Node<T> *front,*rear;
        int lenght;
    public:
        Queue();
        void enqueue(T data);
        T dequeue();
        void display();
        int size();
};

template<class T>
Queue<T>::Queue()
{
    rear = front = NULL;
    lenght = 0; 
}

template<class T>
void Queue<T>::enqueue(T data)
{
    Node<T> *new_node = new Node<T>;
    if(new_node == NULL)
        std::cout<<"The queue is overflow\n";
    else
    {
        new_node->data = data;
        new_node->next = NULL;
        if(front==NULL)
            rear = front = new_node;
        else
        {
            rear->next = new_node;
            rear = new_node;
        }
        lenght++;
    }
}

template<class T>
T Queue<T>::dequeue()
{
    T data = -1;
    if(rear==NULL)
        std::cout<<"The queue is empty\n";
    else
    {
        Node<T> *temp = front;
        data = temp->data;
        front = temp->next;
        delete temp;
        lenght--;
    }
    return data;
}

template<class T>
void Queue<T>::display()
{
    Node<T> *p = front;
    std::cout<<"[";
    while(p->next !=NULL)
    {
        std::cout<<p->data<<",";
        p = p->next;
    }
    std::cout<<"]\n";
}
template<class T>
int Queue<T>::size()
{
    return lenght;
}
    
int main()
{
    Queue<char> q;
    for(int i=105;i<110;i++)
        q.enqueue(i);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}