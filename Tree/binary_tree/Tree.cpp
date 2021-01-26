#include<iostream>
#include"queue.h"
#include<stack>

class Tree
{
    private:
        Node *root;
    public:
        Tree();
        void CreateTree();
        void Preorder(Node *p);
        void Preorder();
        void PreorderI();
        void Inorder(Node *p);
        void Inorder();
        void InorderI();
        void Postorder(Node *p);
        void Postorder();
        void PostorderI();
        void LevelOrder();
        int Height(Node *p);
        int Height();
        int count();
        int count(Node* root);
        int count_leaf();
        int count_leaf(Node* root);
        Node* searchR(Node* root,int key);
        Node* searchR(int key);
        Node* searchI(Node* root,int key);
        Node* searchI(int key);
        void insert(int data);
        Node *insert(Node* root,int data);
        void insertR(int data);
        Node* InPre(Node *p);
        Node* InSucc(Node *p);
        Node* Delete(Node *p, int key);
        Node* Delete(int key);
        void createFromPreorder(int *pre, int n);
};
Tree::Tree()
{
    root = NULL;
}

void Tree::CreateTree()
{
    Node *p,*t;
    int data;
    Queue q(100);
    std::cout<<"Enter root value\n";
    std::cin>>data;
    root = new Node;
    root->data = data;
    root->lchild=root->rchild = NULL;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        p = q.dequeue();
        std::cout<<"Enter the left child of "<<p->data<<std::endl;
        std::cin>>data;
        if(data!=-1)
        {
            t = new Node;
            t->data = data;
            t->rchild = t->lchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        std::cout<<"Enter the right child of "<<p->data<<std::endl;
        std::cin>>data;
        if(data!=-1)
        {
            t = new Node;
            t->data = data;
            t->rchild = t->lchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if(p)
    {
        std::cout<<p->data<<" ";
        this->Preorder(p->lchild);
        this->Preorder(p->rchild);
    }
}

void Tree::Preorder()
{
    Preorder(this->root);
}

void Tree::Inorder(Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        std::cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}

void Tree::Inorder()
{
    this->Inorder(this->root);
}

void Tree::Postorder(Node *p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        std::cout<<p->data<<" ";
    }
}

void Tree::Postorder()
{
    Postorder(this->root);
}

void Tree::LevelOrder()
{
    Node *p = root;
    Queue q(100);
    std::cout<<p->data<<"\n";
    q.enqueue(p);
    while(!q.isEmpty())
    {
        p = q.dequeue();
        if(p->lchild)
        {
            std::cout<<p->lchild->data<<" ";
            q.enqueue(p->lchild);
        }
        if(p->rchild)
        {
            std::cout<<p->rchild->data<<" ";
            q.enqueue(p->rchild);
        }
        std::cout<<"\n";
    }
}

int Tree::Height(Node *p) {
    int x = 0;
    int y = 0;
    if (p == NULL)
        return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}

int Tree::Height()
{
    return this->Height(this->root);
}

void Tree::PreorderI()
{
    std::stack<Node*> stk;
    Node *temp = root;
    while(temp!=NULL || !stk.empty())
    {
        if(temp!=NULL)
        {
            std::cout<<temp->data;
            stk.push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = stk.top();
            stk.pop();
            temp = temp->rchild;
        }
    }
}

void  Tree::InorderI()
{
    std::stack<Node*> stk;
    Node *temp = root;
    while(temp!=NULL || !stk.empty())
    {
        if(temp!=NULL)
        {
            stk.push(temp);
            temp = temp->lchild;
        }
        else
        {
            temp = stk.top();
            stk.pop();
            std::cout<<temp->data;
            temp = temp->rchild;
        }
    }
}


void  Tree::PostorderI()
{
    std::stack<Node*> stk;
    Node *p = root;
    while(p!=NULL||!stk.empty())
    {
        if(p!=NULL)
        {
            stk.push(p);
            p = p->lchild;
        }
        else
        {
            Node *temp = stk.top()->rchild;
            if(temp==NULL)
            {
                temp = stk.top();
                stk.pop();
                std::cout<<temp->data;
                while(!stk.empty() && temp == stk.top()->rchild)
                {
                    temp = stk.top();
                    stk.pop();
                    std::cout<<temp->data;
                }
            }
            else
                p = temp;
        }
    }
}

int Tree::count(Node* root)
{
    
    if(root!=NULL)
        return this->count(root->lchild)+this->count(root->rchild)+1;
    return 0;
}

int Tree::count()
{
    return this->count(this->root);
}


int Tree::count_leaf(Node* root)
{
    int x,y;
    if(root!=NULL)
    {
        x = this->count(root->lchild);
        y = this->count(root->rchild);
        if(!root->lchild && !root->rchild)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}

int Tree::count_leaf()
{
    return this->count_leaf(this->root);
}

Node* Tree::searchR(Node* root,int key)
{
    if(root)
    {
        if(key==root->data)
            return root;
        else if(key>root->data)
            searchR(root->rchild,key);
        else if(key<root->data)
            searchR(root->rchild,key);
    }
    else
        return NULL;   
}

Node* Tree::searchR(int key)
{
    return this->searchR(this->root,key);
}

Node* Tree::searchI(Node* root,int key)
{
    while(root)
    {
        if(key==root->data)
            return root;
        else if(key>root->data)
            root = root->rchild;
        else if(key<root->data)
            root = root->rchild;
    }
    return NULL;    
}
Node* Tree::searchI(int key)
{
    return this->searchI(this->root,key);
}

 void Tree::insert(int data)
 {
    Node* t = this->root;
    Node *new_node,*aux;
    if(!t)
    {
        new_node = new Node;
        new_node->lchild = new_node->rchild = NULL;
        new_node->data = data;
        this->root = new_node;
    }
    else
    {
        while (t)
        {
            aux = t;
            if(t->data==data)
                return;
            else if(data < t->data)
                t = t->lchild;
            else
                t = t->rchild;            
        }
        new_node = new Node;
        new_node->lchild = new_node->rchild = NULL;
        new_node->data = data;
        if (data < aux->data)
            aux->lchild = new_node;
        else
            aux->rchild = new_node;
    }     
 }
Node *Tree::insert(Node* p,int data)
{   
    Node *t;
    if(p==NULL)
    {
        t = new Node;
        t->data = data;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(data < root->data)
        p->lchild = insert(p->lchild,data);
    else if(data > root->data)
        p->rchild = insert(p->rchild,data);
    return p;
}

void Tree::insertR(int data)
{
    this->root = insert(this->root,data);
}

Node* Tree::InPre(Node *p)
{
    while(p!=NULL && p->rchild!=NULL)
        p = p->rchild;
    return p;
}
Node* Tree::InSucc(Node *p)
{
    while(p!=NULL && p->lchild!=NULL)
        p = p->lchild;
    return p;
}

Node* Tree::Delete(Node *p, int key)
{
    Node* q;
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL )
    {
        if (p == this->root)
            this->root = NULL;
        delete p;
        return NULL;
    }
    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else 
    {
        if (Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

Node* Tree::Delete(int key)
{
    return this->Delete(this->root,key);
}

void Tree::createFromPreorder(int *pre,int n)
{
    //Create root node
    int i = 0;
    this->root = new Node;
    this->root->data = pre[i++];
    this->root->lchild = this->root->rchild = NULL;
    //Iterative
    Node *t;
    Node *p = this->root;
    std::stack<Node*> stk;
    stk.push(p);
    while (i<n)
    {
        //left child case
        if(pre[i]<p->data)
        {
            t = new Node;
            t->data = pre[i++];
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            stk.push(p);
            p = t;
        }
        else
        {
            //Right 
            if(pre[i]>p->data && pre[i] < stk.empty() ? 32767 : stk.top()->data)
            {
                t = new Node;
                t->data = pre[i++];
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                p = t;
            }
            else
            {
                p = stk.top();
                stk.pop();
            }
        }
    }
}

int main()
{
    Tree t;
    int a[7]={1,2,4,5,3,6,7};
    t.createFromPreorder(a,7);
    t.Preorder();
    std::cout<<"\n";
    t.Delete(4);
    t.Preorder();
    return 0;
}