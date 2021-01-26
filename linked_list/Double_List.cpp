#include<iostream>

template<class T>
class Node
{
    public:
        Node<T> *prev;
        T data;
        Node<T> *next;
};

template<class T>
class List
{
    private:
        Node<T>* tail;
        Node<T>* head;
        int length;
    public:
        List();
        List(T A[],int length);
        int Size();
        void Display();
        void Insert(int index,T data);
        T Delete(int index);
        void Reverse();
};

template<class T>
List<T>::List()
{
    tail = NULL;
    head = NULL;
    length = 0;
}

template<class T>
List<T>::List(T A[],int length)
{
    Node<T> *aux;
    this->length = length;
    aux = new Node<T>;
    aux->data = A[0];
    aux->prev = NULL;
    aux->next = NULL;
    head = aux;
    tail = aux;
    for(int i=1;i<length;i++)
    {
        aux = new Node<T>;
        aux->data = A[i];
        aux->prev = tail;
        aux->next = tail->next;
        tail->next = aux;
        tail = aux;
    }
}

template<class T>
void List<T>::Display()
{
    Node<T> *p;
    p = head;
    std::cout<<"[";
    while(p!=NULL)
    {
        std::cout<<p->data<<",";
        p = p->next;
    }
    std::cout<<"]\n";
}
template<class T>
int List<T>::Size()
{
    return this->length;
}
template<class T>
void List<T>::Insert(int index,T data)
{
    if(index<0||index>length)
        return;
    Node<T> *aux,*p;
    aux = new Node<T>;
    aux->data = data;
    if(index==0)
    {
        if(head==NULL)
        {
            aux->next = NULL;
            aux->prev = NULL;
            head = aux;
            tail = aux;
        }
        else
        {
            aux->prev = NULL;
            aux->next = head;
            head->prev = aux;
            head = aux;
        }
    }
    else
    {
        p = head;
        for(int i=0;i<index-1;i++)
            p = p->next;
        aux->prev = p;
        aux->next = p->next;
        if(p->next!=NULL)
            p->next->prev = aux;
        else 
            tail = aux;
        p->next = aux;
    }
    length++; 
}

template<class T>
T List<T>::Delete(int index)
{
    if(index<0||index>length)
        return -1;
    Node<T> *p;
    T data_delete;
    p = head;
    if(index==1)
    {
        head = p->next;
        if(head!=NULL)
            head->prev=NULL;
        else
            tail = NULL;
        data_delete = p->data;
        delete p;
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p = p->next;
        p->prev->next  = p->next;
        if(p->next!=NULL)
            p->next->prev = p->prev;
        else
            tail = p->prev;
        data_delete = p->data;
        delete p;    
    }
    length--;
    return data_delete;
}

template<class T>
void List<T>::Reverse()
{
    Node<T> *p;
    Node<T> *aux;
    p = head;
    
    while(p!=NULL)
    {
        aux = p->next;
        p->next = p->prev;
        p->prev = aux;
        p = p->prev;
        if(p!=NULL && p->next==NULL)
            head = p;
    }
    
}

int main(){
    int A[6] = {1,2,3,4,5,6};
    List<int> list(A,6);
    list.Display();
    list.Reverse();
    list.Display();
    return 0;
}