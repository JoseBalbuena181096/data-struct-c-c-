#include<iostream>

template<class T>
class Diagonal{
    private:
        T *diagonal;
    public:
        int rows;
        int cols;
        Diagonal();
        Diagonal(int dimention);
        Diagonal(int rows,int cols);
        ~Diagonal();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
Diagonal<T>::Diagonal(){
    diagonal = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
Diagonal<T>::Diagonal(int dimention){
    diagonal = new T[dimention];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
Diagonal<T>::Diagonal(int rows,int cols){
    diagonal = new T[rows];
    this->cols = cols; 
    this->rows = rows; 
}
template<class T>
Diagonal<T>::~Diagonal(){
    delete []diagonal;
}
template<class T>
void Diagonal<T>::Set(int row,int col,int value){
    if(row == col)
        diagonal[row-1] = value;
}
template<class T>
T Diagonal<T>::Get(int row,int col){
    if(row==col)
        return  diagonal[row-1];
    else
        return 0;
}
template<class T>
void Diagonal<T>::Display(){
    int i,j;
    for(i=0;i<rows;i++){
        std::cout<<"["; 
        for(j=0;j<cols;j++){
            if(i==j)
                std::cout<<diagonal[i]<<" ";
            else
                std::cout<<"0"<<" ";
        }
        std::cout<<"]"<<std::endl; 
    }
}

int main(){
    Diagonal<char> M(10);
    for(int i=1;i<=M.rows;i++)
        M.Set(i,i,i+64);
    M.Display();
    return 0;
}