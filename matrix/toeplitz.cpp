#include<iostream>

template<class T>
class Toeplitz{
    private:
        T *toeplitz;
    public:
        int rows;
        int cols;
        Toeplitz();
        Toeplitz(int dimention);
        Toeplitz(int rows,int cols);
        ~Toeplitz();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
Toeplitz<T>::Toeplitz(){
    toeplitz = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
Toeplitz<T>::Toeplitz(int dimention){
    int size = 2*dimention-1;
    toeplitz = new T[size];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
Toeplitz<T>::Toeplitz(int rows,int cols){
    int size = 2*rows-1;
    toeplitz = new T[size];
    this->cols = cols; 
    this->rows = rows; 
}
template<class T>
Toeplitz<T>::~Toeplitz(){
    delete []toeplitz;
}
template<class T>
void Toeplitz<T>::Set(int row,int col,int value){
    if(row<=col)
        toeplitz[col-row] = value;
    else 
        toeplitz[rows+row-col-1] = value;
}
template<class T>
T Toeplitz<T>::Get(int row,int col){
    if(row<=col)
        return toeplitz[col-row];
    else 
        return toeplitz[rows+row-col-1];
}
template<class T>
void Toeplitz<T>::Display(){
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
    Toeplitz<int> M(5);
    bool flag=false;
    for(int i=1;i<=M.rows;i++){
        for(int j=1;j<=M.cols;j++){
            if(flag)
                M.Set(i,j,i);
            else
                M.Set(i,j,j);
            flag = !flag;
        }
    }
    M.Display();
    return 0;
}