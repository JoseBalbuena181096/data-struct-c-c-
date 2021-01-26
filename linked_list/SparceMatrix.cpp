#include<iostream>

template<class T>
class Node
{
    public:
        int col;
        T data;
        Node<T>* next; 
};

template<class T>
class Matrix
{
    private:
        Node<T>** mat;
        int rows;
        int cols;
    public:
        Matrix(int rows,int cols);
        void Set(int row,int col,T data);
        void Display();
};

template<class T>
Matrix<T>::Matrix(int rows,int cols)
{
    this->cols = cols;
    this->rows = rows;
    mat = new Node<T>*[rows];
    for(int i=0;i<rows;i++)
        mat[i] = NULL;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        {
            T temp;
            std::cout<<"Give me the item M["<<i<<"]["<<j<<"]"<<std::endl;
            std::cin>>temp;
            if(temp!=0)
            {
                Node<T> *new_node = new Node<T>;
                new_node->data = temp;
                new_node->col = j; 
                if(mat[i]==NULL)
                {
                    mat[i] = new_node;
                    new_node->next = NULL;
                }
                else
                {
                    Node<T>* p = mat[i];
                    while(p->next!=NULL)
                        p = p->next;
                    p->next = new_node;
                    new_node->next = NULL;
                }
            }
        }
};

template<class T>
void Matrix<T>::Display()
{
    for(int i=0;i<this->rows;i++)
    {
        std::cout<<"[";
        Node<T> *p = mat[i];
        for(int j=0;j<this->cols;j++)
        {
            if(p!=NULL && j==p->col) 
            {
                std::cout<<p->data<<",";
                p = p->next;
            }    
            else
                std::cout<<"0,";
        }
        std::cout<<"]"<<std::endl;
    }
}
template<class T>
void Matrix<T>::Set(int row,int col,T data)
{
    if(row>rows||col>cols)
        return;
    Node<T> *p = mat[row];
    if(p == NULL)
    {
        Node<T>* new_node = new Node<T>;
        new_node->data = data;
        new_node->col = col;
        new_node->next = NULL;
        mat[row] = new_node;
        return;
    }
    while(p->next!=NULL && col!=p->col)
        p = p->next;
    if(col!=p->col)
    {
        Node<T>* new_node = new Node<T>;
        new_node->data = data;
        new_node->col = col;
        new_node->next = p->next;
        p->next = new_node;
    }
    else if(col==p->col)
    {
        p->data = data;
    }
}

int main()
{   
    Matrix<int> M(3,3);
    M.Display();
    for(int i=1;i<3;i++)
        for(int j=0;j<3;j++)
        {
            M.Set(i,j,6);
        }
    std::cout<<" "<<std::endl;
    M.Display();
    return 0;                    
}