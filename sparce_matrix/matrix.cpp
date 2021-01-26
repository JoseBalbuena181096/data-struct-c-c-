#include<iostream>
struct Element{
    int i;
    int j;
    int x;
};
struct Sparse{
    int cols;
    int rows;
    int num;
    struct Element *e;
};

void Create(struct Sparse *s){
    int i;
    std::cout<<"Enter dimentions "<<std::endl;
    std::cin>>s->cols;
    std::cin>>s->rows;
    std::cout<<"Enter number of non zeros"<<std::endl;
    std::cin>>s->num;
    s->e = new Element[s->num];
    std::cout<<"Enter all elements "<<std::endl;
    for(i=0; i<s->num;i++){
        std::cout<<"Enter i"<<std::endl;
        std::cin>>s->e[i].i;
        std::cout<<"Enter j"<<std::endl;
        std::cin>>s->e[i].j;
        std::cout<<"Enter value"<<std::endl;
        std::cin>>s->e[i].x;
    }
}
void Display(struct Sparse *s){
    int i,j,k=0;
    for(i=0;i<s->rows;i++){
        std::cout<<"[";
        for(j=0;j<s->cols;j++){
            if(s->e[k].i==i && s->e[k].j==j)
                std::cout<<s->e[k++].x<<" ";
            else
                std::cout<<"0"<<" ";
        }
        std::cout<<"]"<<std::endl;
    }
}

struct Sparse *Add(struct Sparse *s1 ,struct Sparse *s2){
    struct Sparse *sum;
    int i=0,j=0,k=0;
    if((s1->rows!=s2->cols) && (s1->cols!=s2->cols))
        return NULL;
    sum = new  struct Sparse;
    sum->e= new struct Element[s1->num+s2->num+1];
    while(i<s1->num && j<s1->num){
        if(s1->e[i].i<s2->e[j].i)
            sum->e[k++]=s1->e[i++];
        else if(s1->e[i].i > s2->e[j].i)
            sum->e[k++]=s2->e[j++];
        else{
            if(s1->e[i].j<s2->e[j].j)
                sum->e[k++]=s1->e[i++];
            else if(s1->e[i].j > s2->e[j].j)
                sum->e[k++]=s2->e[j++];
            else{
                sum->e[k]=s1->e[i];
                sum->e[k++].x = s2->e[j++].x + s1->e[i++].x; 
            }
        }
    }
    sum->cols = s1->cols;
    sum->rows = s1->rows;
    for(;i<s1->num;)
        sum->e[k++]=s1->e[i++];
    for(;j<s2->num;)
        sum->e[k++]=s2->e[j++];
    sum->num = k;
    return sum;
}

int main(){
    Sparse *s2 = new Sparse;
    Sparse *s1 = new Sparse;
    Sparse *sum;
    Create(s1);
    Create(s2);
    sum = Add(s1,s2);
    Display(sum);
    return 0;
}