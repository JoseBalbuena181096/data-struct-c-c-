#include<iostream>

template<class T>
class TriangularL{
    private:
        T *triangularL;
    public:
        int rows;
        int cols;
        TriangularL();
        TriangularL(int dimention);
        TriangularL(int rows,int cols);
        ~TriangularL();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
TriangularL<T>::TriangularL(){
    triangularL  = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
TriangularL<T>::TriangularL(int dimention){
    int size_array = dimention*(dimention+1)/2;
    triangularL = new T[size_array];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
TriangularL<T>::TriangularL(int rows,int cols){
    int size_array = rows*(rows+1)/2;
    triangularL = new T[size_array];
    triangularL = new T[rows];
    this->cols = cols; 
    this->rows = rows;
}
template<class T>
TriangularL<T>::~TriangularL(){
    delete []triangularL;
}
template<class T>
void TriangularL<T>::Set(int row,int col,int value){
    int index = (row*(row-1)/2)+col-1;
    if(row >= col)
        triangularL[index] = value;
}
template<class T>
T TriangularL<T>::Get(int row,int col){
    int index = (row*(row-1)/2)+col-1;
    if(row<=col)
        return  triangularL[index];
    else
        return 0;
}
template<class T>
void TriangularL<T>::Display(){
    int i,j,index;
    for(i=1;i<=rows;i++){
        std::cout<<"["; 
        for(j=1;j<=cols;j++){
            index = (i*(i-1)/2)+j-1;
            if(i>=j)
                std::cout<<triangularL[index]<<" ";
            else
                std::cout<<"0"<<" ";
        }
        std::cout<<"]"<<std::endl; 
    }
}

int main(){
    TriangularL<char> M(5);
    for(int i=1;i<=M.rows;i++){
        for(int j=1;j<=M.cols;j++)
            M.Set(i,j,i+64);
    }
    M.Display();
    return 0;
}