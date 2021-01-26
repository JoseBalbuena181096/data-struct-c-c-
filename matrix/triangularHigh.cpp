#include<iostream>

template<class T>
class TriangularH{
    private:
        T *triangularH;
    public:
        int rows;
        int cols;
        TriangularH();
        TriangularH(int dimention);
        TriangularH(int rows,int cols);
        ~TriangularH();
        void Set(int row,int col,int value);
        T Get(int row,int col);
        void Display();
};

template<class T>
TriangularH<T>::TriangularH(){
    triangularH  = NULL;
    this->cols = 0; 
    this->rows = 0; 
}

template<class T>
TriangularH<T>::TriangularH(int dimention){
    int size_array = dimention*(dimention+1)/2;
    triangularH = new T[size_array];
    this->cols = dimention; 
    this->rows = dimention; 
}

template<class T>
TriangularH<T>::TriangularH(int rows,int cols){
    int size_array = rows*(rows+1)/2;
    triangularH = new T[size_array];
    triangularH = new T[rows];
    this->cols = cols; 
    this->rows = rows;
}
template<class T>
TriangularH<T>::~TriangularH(){
    delete []triangularH;
}
template<class T>
void TriangularH<T>::Set(int row,int col,int value){
    int index = (col*(col-1)/2)+row-1;
    if(row <= col)
        triangularH[index] = value;
}
template<class T>
T TriangularH<T>::Get(int row,int col){
    int index = (col*(col-1)/2)+row-1;
    if(row<=col)
        return  triangularH[index];
    else
        return 0;
}
template<class T>
void TriangularH<T>::Display(){
    int i,j,index;
    for(i=1;i<=rows;i++){
        std::cout<<"["; 
        for(j=1;j<=cols;j++){
            index = (j*(j-1)/2)+i-1;
            if(i<=j)
                std::cout<<triangularH[index]<<" ";
            else
                std::cout<<"0"<<" ";
        }
        std::cout<<"]"<<std::endl; 
    }
}

int main(){
    TriangularH<char> M(5);
    for(int i=1;i<=M.rows;i++){
        for(int j=1;j<=M.rows;j++)
            M.Set(i,j,i+64);
    }
    M.Display();
    return 0;
}