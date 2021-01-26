#include<iostream>

template<class T>
class Node{
    public:
        T data;
        Node<T> *next;
};

template<class T>
class List{
    private:
        Node<T> *head;
        Node<T> *tail;
        int length;
    public:
        List();
        List(T *a,int length);
        void Display();
        void Display(Node<T>* p);
        void Insert(int index,T data);
        T Delete(int index);
        bool isLoop();
        Node<T>* Begin();
};

template<class T>
List<T>::List(){
    head = NULL;
    length = 0;
}

template<class T>
List<T>::List(T *a,int length){
    Node<T> *aux;
    int i;
    this->length = length;
    aux = new Node<T>;
    aux->data = a[0];
    aux->next = aux;
    head = aux;
    tail = head;
    for(i=1;i<length;i++){
        aux = new Node<T>;
        aux->data = a[i];
        aux->next = tail->next;
        tail->next = aux;
        tail = aux;
    }
}
template<class T>
void List<T>::Display(){
    Node<T> *p=head;
    std::cout<<"[";
    do{
        std::cout<<p->data<<",";
        p = p->next;
    }
    while(p!=head);
    std::cout<<"]\n";
}

template<class T>
bool  List<T>::isLoop(){
    Node<T> *p,*q;
    p=q=head;
    do{
        p=p->next;
        q=q->next;
        q = q!=NULL ? q->next:q;
    }while(q!=NULL && p!=NULL && p!=q);
    return q==p?true:false;
}
template<class T>
Node<T>* List<T>::Begin(){
    return this->head;
}
template<class T>
void List<T>::Display(Node<T>* p){
    static int flag=0;
    if(p!=head || flag ==0){
        flag=1;
        std::cout<<p->data<<",";
        this->Display(p->next);
    }
    flag=0;
}
template<class T>
void List<T>::Insert(int index,T data){
    if(index<0||index<length)
        return;
    Node<T> *aux,*p;
    int i;
    if(index==0){
        if(head==NULL){
            aux = new Node<T>;
            aux->data = data;
            aux->next = aux;
            head = aux;
            tail = head;
        }
        else{
            p = head;
            while(p->next!=head)
                p = p->next;
            aux = new Node<T>;
            aux->data = data;
            aux->next = head;
            p->next = aux;
            head = aux;
        }
    }
    else{
        p = head;
        for(i =0;i<index-1;i++)
            p = p->next; 
        aux = new Node<T>;
        aux->data = data;
        aux->next = p->next;
        p->next = aux;  
    }
    length++;
}
template<class T>
T List<T>::Delete(int index){
    if(index<0||index<length)
        return -1;
    T data_delete;
    Node<T> *p,*q;
    int i;
    if(index == 1){
        p=head;
        while (p->next!=head)
            p = p->next; 
        data_delete = head->data;
        if(p==head){
            delete p;
            head = NULL;
        } 
        else{
            q = p->next;
            p->next = q->next;
            head = q->next;
            delete q; 
        }
    }
    else
    {
        p=head;
        for(i=0;i<index-2;i++)
            p = p->next;
        q = p->next;
        data_delete = q->data;
        p->next = q->next;
        delete q;
    }
    return data_delete;
}
int main(){
    List<int> list;
    for(int i=0;i<10;i++)
        list.Insert(i,i+10);
    list.Display();
    std::cout<<list.Delete(10)<<std::endl;
    list.Display();
    return 0;
}