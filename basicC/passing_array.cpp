#include<stdio.h>
#include<stdlib.h>
//The array only passing by address
//pasing passing poniter only of the array
void print_array(int A[],int size){
    for(int i=0;i<size;i++){
        printf("%d",A[i]);
    }
    printf("\n");
}
//passing pointer general
void print_arrayG(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
//funtion that return a array
int *array(int size){
    int *p;
    p = (int*)malloc(size*sizeof(int));
    return (p);
}

int *array2(int size){
    int *p;
    p = new int[size];
    return p;
}
int main(){
    int *a;
    a = array2(5);
    for(int i=0;i<5;i++){
        a[i]=i;
    }
    print_array(a,5);
    print_arrayG(a,5);
   
    return 0;
}