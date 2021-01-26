#include<iostream>
#include <string>
template<class T>
class Node{
    public:
        T data;
        Node *next;
};

template<class T>
class List{
    private:
        Node<T> *head;
        Node<T> *tail;
        int length;
    public:
        List();
        List(T *A,int length);
        void insert(int index,T data);
        void append(T data);
        T remove(int index);
        void reverse();
        void display(Node<T> *head);
        void display();
        int size();
        void clear();
        bool  isLoop();
        List<T> operator+(List<T> &list);
        Node<T>* begin();
        Node<T>* end();
        Node<T>* Iterator;
};

template<class T>
List<T>::List(){
    head=NULL;
    tail=NULL;
    length = 0;
    Iterator=NULL;
}
template<class T>
List<T>::List(T *A,int length){
    this->length = length;
    int i = 0;
    Node<T> *aux;
    head = new Node<T>;
    head->data = A[0];
    head->next = NULL;
    tail = head;
    for(i=1;i<length;i++){
        aux = new Node<T>;
        aux->data = A[i];
        aux->next = NULL;
        tail->next = aux;
        tail = aux; 
    }
}
template<class T>
void List<T>::clear(){
    Node<T> *q,*p;
    q=NULL;
    p=head;
    head=NULL;
    tail=NULL;
    while(p!=NULL){
        q=p;
        p=p->next;
        delete q;
    }
}
template<class T>
Node<T>* List<T>::begin(){
    return this->head;
}
template<class T>
Node<T>* List<T>::end(){
    return this->tail;
}
template<class T>
int List<T>::size(){
    return length;
}

template<class T>
void List<T>::append(T data){
    Node<T> *new_node = new Node<T>;
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL){
        head = new_node;
        tail = new_node;
        length ++;
    }
    else{
        tail->next = new_node;
        tail = new_node;
        length++;
    }
}
template<class T>
void List<T>::display(Node<T> *head){
    static int cout_display=0;
    if(cout_display==0)
        std::cout<<"[";
    if(head !=NULL){
        std::cout<<head->data<<",";
        cout_display++;
        this->display(head->next);
    }
    else{
        std::cout<<"]"<<std::endl;
        cout_display = 0;
    }
}
template<class T>
void List<T>::display(){
    Node<T> *p=this->begin();
    std::cout<<"[";
    while(p!=NULL){ 
        std::cout<<p->data<<",";
        p=p->next;
    }
    std::cout<<"]"<<std::endl;
}
template<class T>
void List<T>::insert(int index,T data){
    if(index<0 || index>length)
        return;
    Node<T> *new_node = new Node<T>;
    new_node->data = data; 
    if(index==0){
        new_node->next = head;
        head = new_node;
        if(length==0)
            tail = new_node;
        length++;
    }
    else{
        Node<T> *p=head;
        int i=0;
        while(i<index-1 && p!=NULL){
            i++;
            p=p->next;
        }
        new_node->next = p->next;
        p->next = new_node;
        if(index==length)
            tail=new_node;
        length++;
    }
}
template<class T>
T List<T>::remove(int index){
    if(index<0 || index>length-1)
        return  -1;
    T data_aux;
    Node<T> *p = head;
    if(index == 0){
        data_aux = p->data;
        head = p->next;
        delete p;
        length--;
        return data_aux;
    }
    else if(index>0){
        Node<T> *q = NULL;
        int i=0;
        while(p!=NULL && i<index){
            i++;
            q=p;
            p=p->next;
        }
        data_aux = p->data;
        q->next = p->next;
        delete p;
        length--;
        return data_aux;
    }
}
template<class T>
void List<T>::reverse(){
    Node<T> *r,*q,*p;
    r=NULL;
    q=NULL;
    p=head;
    while(p!=NULL){
        if(q==NULL)
            tail=p;
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head = q;
}
template<class T>
List<T> List<T>::operator+(List<T> &list){
    List<T> new_list;
    new_list.head = this->head;
    new_list.tail = this->tail;
    new_list.tail->next=list.begin();
    new_list.tail = list.end();
    return new_list;
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
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    List<int> list(a,10);
    list.display();
    return 0;
}