#include<iostream>
template<class T>
class Element{
    public:
        int i;
        int j;
        T x;
};

template<class T>
class Sparse{
    private:
        int cols;
        int rows;
        int num;
        Element<T> *e;
    public:
        Sparse(int cols,int rows, int num);
        ~Sparse();
        Sparse<T> operator+(Sparse<T>&);
        template<class T_IS>
        friend std::istream& operator>>(std::istream&, Sparse<T_IS>&);
        template<class T_OS>
        friend std::ostream& operator<<(std::ostream&, Sparse<T_OS>&);
};

template<class T>
std::istream& operator>>(std::istream& is, Sparse<T>& s){
    std::cout<<"Enter all elements "<<std::endl;
    for(int i=0; i<s.num;i++){
        std::cout<<"row: "<<std::endl;
        std::cin>>s.e[i].i;
        std::cout<<"col: "<<std::endl;
        std::cin>>s.e[i].j;
        std::cout<<"value: "<<std::endl;
        std::cin>>s.e[i].x;
    }
    return is;
}

template<class T>
std::ostream& operator<<(std::ostream& os, Sparse<T>& s){
    int i,j,k=0;
    for(i=0;i<s.rows;i++){
        os<<"[";
        for(j=0;j<s.cols;j++){
            if(s.e[k].i==i && s.e[k].j==j)
                os<<s.e[k++].x<<" ";
            else
                os<<"0"<<" ";
        }
        os<<"]"<<std::endl;
    }
    return os;
}

template<class T>
Sparse<T>::Sparse(int rows,int cols, int num){
    this->rows = rows;
    this->cols = cols;
    this->num = num;
    e = new Element<T>[this->num];
}


template<class T>
Sparse<T>::~Sparse(){
    delete []e;
}

template<class T>
Sparse<T> Sparse<T>::operator+(Sparse<T>& s2){
    Sparse<T> *sum;
    int i=0,j=0,k=0;
    if((rows!=s2.cols) && (cols!=s2.cols))
        return Sparse<T>(0,0,0);
    sum = new Sparse<T>(rows,cols,num+s2.num+1);
    while(i<num && j<s2.num){
        if(e[i].i<s2.e[j].i)
            sum->e[k++]=e[i++];
        else if(e[i].i > s2.e[j].i)
            sum->e[k++]=s2.e[j++];
        else{
            if(e[i].j<s2.e[j].j)
                sum->e[k++]=e[i++];
            else if(e[i].j > s2.e[j].j)
                sum->e[k++]=s2.e[j++];
            else{
                sum->e[k]=e[i];
                sum->e[k++].x = e[j++].x + s2.e[i++].x; 
            }
        }
    }
    sum->cols = cols;
    sum->rows = rows;
    for(;i<num;)
        sum->e[k++]=e[i++];
    for(;j<s2.num;)
        sum->e[k++]=s2.e[j++];
    sum->num = k;
    return *sum;
}
int main(){
    Sparse<float> s1 = Sparse<float>(2,2,2);
    std::cin>>s1;
    std::cout<<s1;
    Sparse<float> s2 = Sparse<float>(2,2,2);
    std::cin>>s2;
    std::cout<<s2;
    Sparse<float> sum = s1+s2;
    std::cout<<sum;
    return 0;
}