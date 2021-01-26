#include<iostream>
#include"Stack.h"
#include<string.h>


bool isBalance(char *A)
{
    int size_str = strlen(A);
    Stack<char> stk(size_str);
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='('||A[i]=='{'||A[i]=='[')
            stk.Push(A[i]);
        else if(A[i]==')'||A[i]==']'||A[i]=='}')
        {
            char temp = stk.Pop();
            if(temp == '(' && A[i]!=')')
                return false;
            else if(temp == '[' && A[i]!=']')
                return false;
            else if(temp =='{' && A[i]!='}')
                return false;    
        }
    }
    return stk.isEmpty()?true:false;
}

int main()
{
    char exp[] = "{[(a+b)*(c-d)]";
    std::cout<<(exp)<<std::endl;
    std::cout<<isBalance(exp)<<std::endl;
    return 0;
}