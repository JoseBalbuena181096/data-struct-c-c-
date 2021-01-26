#include<iostream>

template<class T>
class Array{
    private:
        T *A;
        int size;
        int length;
        void Swap(T *x,T *y);
    public:
        Array();
        Array(int size);
        ~Array();
        void Display()const;
        void Append(T data);
        void Insert(int index,T data);
        T Delete(int index);
        int LinearSearch(T key);
        int BinarySearch(T key);
        T Get(int index)const;
        void Set(int index,T data);
        T Max()const;
        T Min()const;
        T Sum()const;
        float Avg()const;
        void Reverse();
        void Reverse2();
        void InsertSort(T data);
        bool isSorted();
        void Rearrange();
        Array<T> *Merge(Array<T> arr2);
        Array<T> *Union(Array<T> arr2);
        Array<T> *Interception(Array<T> arr2);
        Array<T> *Difference(Array<T> arr2);
        void MissingUnique();
        void MissingMul();
        void MissingUnsorted();
        void Duplicate();
        void CountDuplicate();
        void CountDuplicateH();
        void CountDuplicateU();
        void PairSum(T k);
        void PairSumH(T k);
        void PairSumS(T k);
        Array<T>* MinMax();
};
template<class T>
Array<T>::Array(int size){
    this->size = size;
    A = new T[size];
    length = 0;  
}
template<class T>
Array<T>::Array(){
    size = 10;
    A = new T[size];
    length = 0;
}
template<class T>
Array<T>::~Array(){
    delete []A;
}
template<class T>
void Array<T>::Display()const{
    int i;
    std::cout<<"[";
    for(i=0;i<length;i++)
        std::cout<<A[i]<<", ";
    std::cout<<"]\n";
}
template<class T>
void Array<T>::Append(T data){
    if(length<size)
        A[length++] = data;
}
template<class T>
void Array<T>::Insert(int index,T data){
    int i;
    if(index >= 0 && index <= length){
        for(i=length;i>index;i--)
            A[i] = A[i-1];
        A[index] = data;
        length++;
    }
}
template<class T>
T Array<T>::Delete(int index){
    T data;
    int i;
    if(index >= 0 && index <= length){
        data = A[index];
        for(i=index;i<length-1;i++)
            A[i] = A[i+1];
        length--;
        return data; 
    }
    return 0;
}
template<class T>
void Array<T>::Swap(T *x,T *y){
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
template<class T>
int Array<T>::LinearSearch(T key){
    int i;
    for(i=0;i<length;i++){
        if(key == A[i]){
            Swap(&A[i],&A[0]);
            return i;
        }
    }
    return -1;
}
template<class T>
int Array<T>::BinarySearch(T key){
    int low,high,mid;
    low = 0;
    high = length-1;
    while(low<=high){
        mid = (high+low)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            high = mid-1;
        else 
            low = mid+1;
    }
    return -1;
}
template<class T>
T Array<T>::Get(int index)const{
    if(index>=0 && index<length)
        return A[index];
    return -1;
}
template<class T>
void Array<T>::Set(int index,T data){
    if(index>=0 && index<length)
        A[index] = data;
}
template<class T>
T Array<T>::Max()const{
    int i;
    T max = A[0];
    for(i=1;i<length;i++){
        if(A[i]>max)
            max = A[i];
    }
    return max;

}
template<class T>
T Array<T>::Min()const{
    int i;
    T min = A[0];
    for(i=1;i<length;i++){
        if(A[i]<min)
            min = A[i];
    }
    return min;
}
template<class T>
T Array<T>::Sum()const{
    int i;
    T s = 0;
    for(i=0;i<length;i++){
        s += A[i];
    }
    return s;
}
template<class T>
float Array<T>::Avg()const{
    return (float)this->Sum()/length;
}
template<class T>
void Array<T>::Reverse(){
    T *B = new T[this->length];
    int i,j;
    for(i=0,j=length-1;j>=0;i++,j--)
        B[i] = A[j];
    for(i=0;i<length;i++)
        A[i] = B[i];
    delete []B;
}
template<class T>
void Array<T>::Reverse2(){
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
        Swap(&A[i],&A[j]);
}
template<class T>
void Array<T>::InsertSort(T data){
    int i = length-1;
    if(length == size)
        return;
    while(i>=0 && A[i]>data){
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = data;
    length++;
}
template<class T>
bool Array<T>::isSorted(){
    int i;
    for(i=0;i<length-1;i++){
        if(A[i]>A[i+1])
            return false;
    }
    return true;
}
template<class T>
void Array<T>::Rearrange(){
    int i,j;
    i = 0;
    j = length-1;
    while(i<j){
        while(A[i]<0) i++;
        while(A[j]>=0) j--;
        if(i<j) Swap(&A[i],&A[j]);
    }
}
template<class T>
Array<T>* Array<T>::Merge(Array<T> arr2){
    int i,j,k;
    i=j=k=0;
    Array<T> *arr3 = new Array<T>(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j])
            arr3->A[k++] = A[i++];
        else
            arr3->A[k++] = arr2.A[j++]; 
    }
    for(;i<length;i++)
        arr3->A[k++] = A[i];
    for(;j<arr2.length;j++)
        arr3->A[k++] = arr2.A[j];
    arr3->length = length + arr2.length;
    return arr3;
}
template<class T>
Array<T>* Array<T>::Union(Array<T> arr2){
    int i,j,k;
    i=j=k=0;
    Array<T> *arr3 = new Array<T>(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if(arr2.A[j]<A[i])
            arr3->A[k++] = A[j++];
        else{
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++] = A[i]; 
    for(;j<arr2.length;j++)
        arr3->A[k++] = arr2.A[j];
    arr3->length = k;
    return arr3; 
}
template<class T>
Array<T>* Array<T>::Interception(Array<T> arr2){
    int k,j,i;
    i=k=j=0;
    Array<T> *arr3 = new Array<T>(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j])
            i++;
        else if(arr2.A[j]<A[i])
            j++;
        else{
            arr3->A[k++] = A[i++];
            j++;
        }    
    } 
    arr3->length = k;
    return arr3;
}
template<class T>
Array<T>* Array<T>::Difference(Array<T> arr2){
    int i,j,k;
    i=j=k=0;
    Array<T> *arr3 = new Array<T>(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j])
            arr3->A[k++] = A[i++];
        else if(arr2.A[j]<A[i])
            j++;
        else{
            j++;
            i++;
        }
    }
    for(;i<length;i++)
        arr3->A[k++] = A[i];
    arr3->length = k;
    return arr3;
}
template<class T>
void Array<T>::MissingUnique(){
    int i;
    T difference;
    difference = A[0]-0;
    for(i=0;i<length;i++){
        if((A[i]-i)!=difference){
            std::cout<<"missing is: "<<i+difference<<"\n";
            break;
        }
    }
}
template<class T>
void Array<T>::MissingMul(){
    int i;
    T difference;
    difference = A[0]-0;
    for(i=0;i<length;i++){
        if((A[i]-i) != difference){
            while(difference<(A[i]-i)){
                std::cout<<"missing is: "<<i+difference<<"\n";
                difference++;
            }
        }
    }
}
template<class T>
void Array<T>::MissingUnsorted(){
    int i;
    T max = this->Max();
    Array<T> H(max);
    for(i=0;i<max;i++)
        H.Append(0);
    for(i=0;i<length;i++)
        H.A[A[i]]++;
    for(i=1;i<H.length;i++){
        if(H.A[i]==0)
            std::cout<<"Missing element: "<<i<<"\n";
    }  
}
template<class T>
void Array<T>::Duplicate(){
    int i;
    T last_duplicate = 0;
    for(i=0;i<length-1;i++){
        if(A[i]==A[i+1] && A[i]!=last_duplicate){
            std::cout<<A[i]<<" is duplicate \n";
            last_duplicate = A[i];
        }
    }
}
template<class T>
void Array<T>::CountDuplicate(){
    int i,j;
    for(int i=0;i<length-1;i++){
        if(A[i]==A[i+1]){
            j = i+1;
            while(A[j]==A[i]) j++;
            std::cout<<A[i]<<" is duplicate "<<j-i<<" times\n";
            i=j-1;
        }
    }
}

template<class T>
void Array<T>::CountDuplicateH(){
    int i;
    T max = this->Max();
    Array<T> H(max); 
    for(i=0;i<max;i++)
        H.Append(0);
    for(i=0;i<length;i++)
        H.A[A[i]]++;
    for(i=0;i<H.length;i++){
        if(H.A[i]>1)
            std::cout<<i<<" is duplicate "<<H.A[i]<<" times\n";
    }
}
template<class T>
void Array<T>::CountDuplicateU(){
    int count;
    int i,j;
    for(i=0;i<length-1;i++){
        count = 1;
        if(A[i]!=-1){
            for(j=i+1;j<length;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j] = -1;
                }
            } 
            if(count>1)
                std::cout<<A[i]<<" is duplicate "<<count<<" times\n";      
        }
    }
}
template<class T>
void Array<T>::PairSum(T k){
    int i,j;
    for(i=0;i<length-1;i++){
        for(j=i+1;j<length;j++){
            if( (A[i]+A[j]) == k)
                std::cout<<A[i]<<" + "<<A[j]<<" = "<<A[i]+A[j]<<"\n";
        }
    }
}
template<class T>
void Array<T>::PairSumH(T k){
    int i;
    T max = this->Max();
    Array H(max);
    for(i=0;i<max;i++)
        H.Append(0);
    for(i=0;i<H.length;i++){
        if(H.A[k-A[i]]!=0)
            std::cout<<A[i]<<" + "<<k-A[i]<<" = "<<k<<"\n";
        H.A[A[i]]++;
    }
}
template<class T>
void Array<T>::PairSumS(T k){
    int j,i;
    j=length-1;
    i=0;
    while(i<j){
        if((A[i]+A[j]) == k)
            std::cout<<A[i++]<<" + "<<A[j--]<<" = "<<k<<"\n";
        else if((A[i]+A[j])<k)
            i++;
        else
            j--;
    }
}
template<class T>
Array<T>* Array<T>::MinMax(){
    Array<T> *min_max = new Array<T>(2);
    min_max->Append(A[0]);
    min_max->Append(A[0]);
    int i;
    for(i=1;i<length;i++){
        if(A[i] < min_max->Get(0))
            min_max->Set(0,A[i]);
        else if(A[i] > min_max->Get(1))
            min_max->Set(1,A[i]);      
    }
    return min_max;
}
int main(){
    Array<int> *arr1 = new Array<int>(10);
    Array<int> *min_max;
    arr1->Append(1);
    arr1->Append(3);
    arr1->Append(4);
    arr1->Append(5);
    arr1->Append(6);
    arr1->Append(8);
    arr1->Append(9);
    arr1->Append(10);
    arr1->Append(12);
    arr1->Append(14);
    arr1->Display();
    min_max = arr1->MinMax();
    arr1->PairSumS(10);
    min_max->Display();
    return 0;
}