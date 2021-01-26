#include<iostream>
#include<string.h>
#include"Stack.cpp"

int pre(char c)
{
    if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    return 0;
}

bool isOperand(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return true;
    else
        return false;
}

char *InToPost(char *infix)
{
    int i=0,j=0;
    int len = strlen(infix);
    char *postfix = new char[len+2];
    Stack<char> stk;
    stk.Push(' ');
    while(infix[i] != '\0')
    {
        if(!isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if(pre(infix[i])>pre(stk.Top()))
                stk.Push(infix[i++]);
            else
                postfix[j++] = stk.Pop();
        }
    }
    while(!stk.isEmpty())
        postfix[j++] = stk.Pop();
    postfix[j]='\0';
    return postfix;
}

int Eval(char *postfix)
{
    int x1 = 0,x2 = 0,result = 0;
    Stack<int> stk;
    for(int i =0;postfix[i]!='\0';i++)
    {
        if(!isOperand(postfix[i]))
            stk.Push(postfix[i]-'0');
        else
        {
            x2 = stk.Pop();
            x1 = stk.Pop();
            switch (postfix[i])
            {
            case '+':
                result = x1+x2;
                break;
            
            case '-':
                result = x1-x2;
                break;

            case '*':
                result = x1*x2;
                break;
            case '/':
                result = x1/x2;
                break;
            }
        stk.Push(result);
        }
    }
    return stk.Top();
}

int main()
{
    char in[] = "2+1*1-4/2";
    std::cout<<in<<std::endl;
    char *postfix = InToPost(in);
    std::cout<<postfix<<"\n";
    std::cout<<Eval(postfix)<<std::endl;
    return 0;
}