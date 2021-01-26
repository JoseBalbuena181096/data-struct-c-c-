#include<iostream>

class String{
    private:
        char *S;
        int size;
        int lenght;
    public:
        String();
        String(int);
        String(const char *string);
        ~String();    
        int Lenght();
        void Display();
        void ChangeCase();
        int Vowels();
        int Consonents();
        int Words();
        int Validate();
        void Reverse();
        void ReverseSwap();
        void Set(const char *string);
        char* Get();
        int IsEqual(const char *string);
        int IsPalindrome();
        void Duplicate();
        void DuplicateBW();
        void IsAnagram(const char *string);
        void Permutation(char *Str,int k);
        void PermutationSwap(char *Str,int l,int h);
        void Swap(char *c1,char *c2);
}; 

String::String(){
    this->S = new char[10];
    lenght = 0;
    size = 10;
}
String::String(int size){
    this->S = new char[size];
    this->size = size;
    lenght = 0;
}
String::String(const char *string){
    int i;
    int l;
    for(l=0;*(string+l)!='\0';l++);
    this->S = new char[l];
    this->size = l;
    for(i=0;i<l;i++)
        *(S+i)=*(string+i);
    lenght = l;
}
String::~String(){
    delete []S;
}
int String::Lenght(){
    return lenght;
}

void String::Set(const char *string){
    delete []S;
    int i;
    int l;
    for(l=0;*(string+l)!='\0';l++);
    this->S = new char[l];
    this->size = l;
    for(i=0;i<l;i++)
        *(S+i)=*(string+i);
    lenght = l;
}
char* String::Get(){
    return this->S;
}
void String::Display(){
    std::cout<<S<<std::endl;
}
void String::ChangeCase(){
    int i;
    for(i=0;S[i]!='\0';i++){
        if(S[i]>=65 && S[i]<=90)
            S[i]+=32;
        else if(S[i]>=97 && S[i]<=122)
            S[i]-=32;
    }
}

int String::Vowels(){
    int i;
    int vowels=0;
    for(i=0;S[i]!='\0';i++){
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U')
            vowels++;
    }
    return vowels;
}

int String::Consonents(){
    int i;
    int consonents=0;
    for(i=0;S[i]!='\0';i++){
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U');
        else if((S[i]>=65 && S[i]<=90)||(S[i]>=97 && S[i]<=122))
            consonents++; 
    }
    return consonents;
}
int String::Words(){
    int i;
    int words = 1;
    for(i=0;S[i]!='\0';i++){
        if(S[i]==' ' && S[i-1]!=' ')
            words++;
    }
    return words;
}
int String::Validate(){
    int i;
    for(i=0;S[i]!='\0';i++){
        if(!(S[i]>=32 && S[i]<=90) && !(S[i]>=97 && S[i]<=122))
        return 0;
    }
    return 1;
}
void String::Reverse(){
    char aux[lenght];
    int j,i;
    for(i=lenght-1,j=0;i>=0;i--,j++)
        aux[j]=S[i];
    aux[j] = '\0';
    Set(aux);
}
void String::ReverseSwap(){
    char aux;
    int i,j;
    for(i=lenght-1,j=0;i>j;i--,j++){
        aux = S[i];
        S[i] = S[j];
        S[j] = aux;
    } 
}
int String::IsEqual(const char *string){
    int l;
    for(l=0;string[l]!='\0';l++);
    if(l>lenght)
        return 0;
    for(l=0;S[l]!='\0';l++){
        if(S[l]!=string[l])
            return 0;
    }
    return 1;
}
int String::IsPalindrome(){
    String reverse(this->Get());
    reverse.Reverse();
    reverse.Display();
    return this->IsEqual(reverse.Get());
}
void String::Duplicate(){
    int H[94],i;
    char c;
    for(i=0;i<94;i++){
        H[i]=0;
    }
    for(i=0;S[i]!='\0';i++){
        H[S[i]-32]+=1;
    }
    for(i=0;i<94;i++){
        if(H[i]>1){
            c=i+32;
            std::cout<<c<<" : "<<H[i]<<std::endl;
        }
    }
    std::cout<<std::endl;
}
void String::DuplicateBW(){
    uint64_t H=0,X=0,i;
    char c;
    for(i=0;S[i]!='\0';i++){
        X=1;
        X=(X<<(S[i]-32));
        if((X & H)>0){
            c = S[i];
            std::cout<<c<<std::endl;        
        }
        else{
            H = X|H;
        }
    }
}
void String::IsAnagram(const char *string){
    int H[94],i;
    for(i=0;i<94;i++)
        H[i]=0;
    for(i=0;S[i]!='\0';i++)
        H[S[i]-32]++;
    for(i=0;string[i]!='\0';i++){
        H[S[i]-32]--;
        if(H[S[i]-32]<0){
            std::cout<<S<<" isn't anagram of "<<string<<std::endl;
            break;
        }
    }
    if(string[i]=='\0')
       std::cout<<S<<" is anagram of "<<string<<std::endl;
}
void String::Swap(char *c1,char *c2){
    char aux;
    aux = *c1;
    *c1 = *c2;
    *c2 = aux; 
}
void String::Permutation(char *Str,int k=0){
    static int Arr[10]={0};
    static char Res[10];
    int i;
    if(Str[k]=='\0'){
        Res[k]='\0';
        std::cout<<Res<<std::endl;
    }
    else{
        for(i=0;Str[i]!='\0';i++){
            if(Arr[i]==0){
                Res[k]=Str[i];
                Arr[i]=1;
                this->Permutation(Str,k+1);
                Arr[i]=0;
            }
        }
    }     
}
void String::PermutationSwap(char *Str,int l,int h){
    int i;
    if(l==h){
        std::cout<<Str<<std::endl;
    }
    else{
        for(i=l;i<=h;i++){
            this->Swap(&Str[l],&Str[i]);
            this->PermutationSwap(Str,l+1,h);
            this->Swap(&Str[l],&Str[i]);
        }
    }
}

int main(){
    String phrase("jose");    
    std::cout<<phrase.Get()<<std::endl;
    phrase.PermutationSwap(phrase.Get(),0,phrase.Lenght()-1);
    return 0;
}
