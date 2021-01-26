#include<iostream>

struct Term{
    int coeff;
    int exp;
};

struct Poly{
    int n;
    struct Term *terms;
};

void create(struct Poly *p){
    int i;
    std::cout<<"Number of terms"<<std::endl;
    std::cin>>p->n;
    p->terms = new Term;
    std::cout<<"Enter terms"<<std::endl;
    for(i=0;i<p->n;i++)
        std::cin>>p->terms[i].coeff>>p->terms[i].exp;
}

void display(struct Poly *p){
    int i;
    for(i=0;i<p->n;i++)
        std::cout<<p->terms[i].coeff<<"x"<<p->terms[i].exp<<"+";
    std::cout<<std::endl;
}
struct Poly*add(struct Poly *p1, struct Poly *p2){
    int i,j,k;
    struct Poly *sum = new Poly;
    sum->terms = new Term[p1->n+p2->n];
    i=j=k=0;
    while(i<p1->n && j<p2->n){
        if(p1->terms[i].exp > p2->terms[j].exp)
            sum->terms[k++] =  p1->terms[i++];
        else if(p1->terms[i].exp < p2->terms[j].exp)
            sum->terms[k++] =  p2->terms[j++];
        else {
            sum->terms[k].exp =  p1->terms[i].exp;
            sum->terms[k++].coeff =  p1->terms[i++].coeff+p2->terms[j++].coeff;
        }
    }
    for(;i<p1->n;i++)
        sum->terms[k++] =  p1->terms[i++];
    for(;i<p2->n;j++)
        sum->terms[k++] =  p2->terms[j++];
    sum->n = k;
    return sum;
}
int main(){
    Poly *p1 = new Poly;
    Poly *p2 = new Poly;
    Poly *sum;
    create(p1);
    display(p1);
    create(p2);
    display(p2);
    sum = add(p1,p2);
    display(sum);
    return 0;
}