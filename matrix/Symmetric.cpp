#include<iostream>

template<class T>
class Symmetric{
    private:
        T *symmetric;
    public:
        int rows;
        int cols;
        Symmetric();
        Symmetric(int dimention);
        Symmetric(int rows,int cols);
        ~Symmetric();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
Symmetric<T>::Symmetric(){
    symmetric  = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
Symmetric<T>::Symmetric(int dimention){
    int size_array = dimention*(dimention+1)/2;
    symmetric = new T[size_array];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
Symmetric<T>::Symmetric(int rows,int cols){
    int size_array = rows*(rows+1)/2;
    symmetric = new T[size_array];
    symmetric = new T[rows];
    this->cols = cols; 
    this->rows = rows;
}
template<class T>
Symmetric<T>::~Symmetric(){
    delete []symmetric;
}
template<class T>
void Symmetric<T>::Set(int row,int col,int value){
    int index = (col*(col-1)/2)+row-1;
    if(row >= col)
        symmetric[index] = value;
}
template<class T>
T Symmetric<T>::Get(int row,int col){
    int index = (col*(col-1)/2)+row-1;
    if(row >= col)
        return symmetric[index];
    else{
        index = (row*(row-1)/2)+col-1;
        return symmetric[index];
    }
}
template<class T>
void Symmetric<T>::Display(){
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
    Symmetric<char> M(5);
    for(int i=1;i<=M.rows;i++){
        for(int j=1;j<=M.cols;j++)
            M.Set(i,j,j+64);
    }
    M.Display();
    return 0;
}