#include<iostream>

template<class T>
class Tridiagonal{
    private:
        T *tridiagonal;
    public:
        int rows;
        int cols;
        Tridiagonal();
        Tridiagonal(int dimention);
        Tridiagonal(int rows,int cols);
        ~Tridiagonal();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
Tridiagonal<T>::Tridiagonal(){
    tridiagonal = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
Tridiagonal<T>::Tridiagonal(int dimention){
    int size = 3*dimention-2;
    tridiagonal = new T[size];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
Tridiagonal<T>::Tridiagonal(int rows,int cols){
    int size = 3*rows-2;
    tridiagonal = new T[size];
    this->cols = cols; 
    this->rows = rows; 
}
template<class T>
Tridiagonal<T>::~Tridiagonal(){
    delete []tridiagonal;
}
template<class T>
void Tridiagonal<T>::Set(int row,int col,int value){
    if((row-col)==1)
        tridiagonal[row-1] = value;
    else if((row-col)==0)
        tridiagonal[(rows+row-2)] = value;
    else if((row-col)==(0-1))
        tridiagonal[(2*rows)+(row-2)] = value;
}
template<class T>
T Tridiagonal<T>::Get(int row,int col){
    if((row-col)==1)
        return tridiagonal[row-1];
    else if((row-col)==0)
        return tridiagonal[(rows+row-2)];
    else if((row-col)==(0-1))
        return tridiagonal[(2*rows)+(row-2)];
    else 
        return 0;
}
template<class T>
void Tridiagonal<T>::Display(){
    int i,j;
    for(i=1;i<=rows;i++){
        std::cout<<"["; 
        for(j=1;j<=cols;j++){
            std::cout<<this->Get(i,j)<<" ";
        }
        std::cout<<"]"<<std::endl; 
    }
}

int main(){
    Tridiagonal<int> M(8);
    for(int i=1;i<=M.rows;i++){
        for(int j=1;j<=M.cols;j++)
            M.Set(i,j,j);
    }
    M.Display();
    return 0;
}