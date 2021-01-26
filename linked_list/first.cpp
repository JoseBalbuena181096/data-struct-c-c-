#include<iostream>

struct Node{
    int data;
    struct Node* next;
}*head=NULL,*tail=NULL,*second=NULL,*tail2=NULL,*third=NULL;

void Append(int data){
    struct Node *new_node = new Node;
    if(head==NULL)
        tail=new_node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;  
}
void Display(){
    std::cout<<"[";
   for(Node* p=head;p!=NULL;p=p->next){
        std::cout<<p->data<<",";
    }
    std::cout<<"]"<<std::endl;
}
void DisplayR(struct Node* p){
    static int count=0;
    if(count==0)
        std::cout<<"[";
    if(p!=NULL){
        std::cout<<p->data<<",";
        count++;
        DisplayR(p->next);
    }
    else
        std::cout<<"]"<<std::endl;
        count = 0;
}
int Count(struct Node*p){
    if(p!=NULL)
        return Count(p->next)+1;
    else
        return 0;
}

int Sum(){
    int sum =0;
    for(struct Node* p = head;p!=NULL;p=p->next){
        sum+=p->data;
    }  
    return sum;
} 
int SumR(struct Node *p){
    if(p!=NULL)
        return p->data + SumR(p->next);
    else
        return 0;
}
int Max(){
    int max = head->data;
    for(Node*p = head;p!=NULL;p=p->next){
        if(p->data>max)
            max = p->data;
    }
    return max;
}

int MaxR(Node *p){
    int x;
    if(p!=NULL){
        x = MaxR(p->next);
        return x>p->data?x:p->data;
    }
    return head->data;
}
Node* Search(int key){
    for(Node *p=head;p!=NULL;p=p->next){
        if(key==p->data)
            return p;
    }
    return NULL;
}

Node* SearchR(Node* p,int key){
    if(p==NULL)
        return p;
    if(key ==p->data)
        return p;
    return SearchR(p->next,key);
}

Node* SearchI(int key){
    Node *q = NULL;
    for(Node *p=head;p!=NULL;p=p->next){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
    }
    return NULL;
}

void Insert(int index,int data){
    int max = Count(head);
    if(index<0 || index>max)
        return;
    Node *new_node = new Node;
    if(index==0){
        new_node->data = data;
        new_node->next = head;
        head = new_node; 
        tail = new_node;
    }
    else if(index>0){
        Node *p=head;
        for(int i=0;i<index-1 && p!=NULL;i++)
            p=p->next;
        if(p!=NULL){
            new_node->data = data;
            new_node->next = p->next;
            p->next = new_node;
            if(index==max)
                tail=new_node;
        }
    }
}

void Insert_Tail(int data){
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL){
        head=new_node;
        tail=new_node;
    }
    else{
        tail->next = new_node;
        tail=new_node;
    }
}

void Insert_Tail2(int data){
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    if(second==NULL){
        second=new_node;
        tail2=new_node;
    }
    else{
        tail2->next = new_node;
        tail2=new_node;
    }
}

void InsertS(int data){
    Node *p,*q;
    Node *new_node = new Node;
    new_node->data = data;
    if(head==NULL){
        head=new_node;
        new_node->next =NULL;
    }
    for(p=head,q=NULL;p!=NULL && p->data<data;p= p->next)
        q=p;
    if(p==head){
        new_node->next = head;
        head = new_node;
    }
    else{
        new_node->next = q->next;
        q->next = new_node;
    }
}
int Delete(int pos){
    int data=-1;
    Node *p,*q;
    if(pos<0 || pos>Count(head))
        return -1;
    if(pos==0){
        p = head;
        data = p->data;
        head = p->next;
        delete p;
        return data;
    }
    else if(pos>0){
        p=head;
        q=NULL;
        for(int i=0;i<pos-1 && p!=NULL;i++){
            q=p;
            p=p->next;
        }
        data = p->data;
        q->next = p->next;
        delete p;
        return data;
    }
}
bool isSorted(){
    Node *p=head;
    int data = p->data;
    while(p!=NULL){
        if(data > p->data){
            return false;
        }
        data=p->data;
        p = p->next;
    } 
    return true;
}
void DeleteD(){
    Node *p,*q;
    p=head;
    q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p = p->next;
            q = p->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
void Reverse(){
    int size =  Count(head);
    int array[size];
    Node *p;
    int i=0;
    for(p = head;p!=NULL;p=p->next)
        array[i++]=p->data;
    for(p=head,i--;p!=NULL;p=p->next)
        p->data=array[i--];
}
void ReverseL(){
    Node *p,*q,*r;
    p=head;
    q=NULL;
    r=NULL;
    while(p!=NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    } 
    head = q;
}
void ReverseR(Node *q,Node *p){
    if(p!=NULL){
        ReverseR(p,p->next);
        p->next = q;
    }
    else
        head = q;
}

void Concat(Node *p,Node *q){
    third = p;
    while(p->next!=NULL)
        p=p->next;
    p->next=q;
}

void Merge(Node *p,Node *q){
    Node *last;
    if(p->data<q->data){
        last = p;
        third = last;
        p = p->next;
        third->next = NULL;
    }
    else{
        last = q;
        third = last;
        q = q->next;
        third->next = NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next=NULL; 
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next=NULL; 
        }
    }
    if(p!=NULL)
        last->next = p;
    if(q!=NULL)
        last->next = q;
}


int main(){
    for(int i=0;i<10;i+=2)
         Insert_Tail(i);
    for(int i=1;i<120;i+=2)
        Insert_Tail2(i);
    Display();
    DisplayR(second);
    Merge(head,second);
    DisplayR(third);
    return 0;
}
