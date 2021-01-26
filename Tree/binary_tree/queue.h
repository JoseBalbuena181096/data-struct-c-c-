#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
class Node
{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};

class Queue
{
    private:
        int front;
        int rear;
        int size;
        Node **Q;
    public:
        Queue();
        Queue(int size);
        void enqueue(Node *node);
        Node *dequeue();
        bool isEmpty();
};
Queue::Queue()
{
    front = rear =-1;
    size = 10;
    Q = new Node*[size];
}
Queue::Queue(int size)
{
    front = rear = -1;
    this->size = size;
    Q = new Node*[size]; 
}

void Queue::enqueue(Node *node)
{
    if(rear == size-1)
        std::cout<<"The queue is full\n";
    else
        Q[++rear]= node;
}
Node *Queue::dequeue()
{
    Node* node = NULL;
    if(front==rear)
        std::cout<<"The queue is empty\n";
    else
        node = Q[++front];
    return node;
}

bool Queue::isEmpty()
{
    return front==rear;
}

#endif 