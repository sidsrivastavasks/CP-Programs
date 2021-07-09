#include <stdio.h>
#include <stdlib.h>
int stack[100];
int top = -1;
void push(int s)
{
    int i;
    if(top>99)
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        top++;
        stack[top] = s;
    }
}
int pop()
{
    int val;
    if(top<0)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}
int isoperator(char ch)
{
    if(ch=='*'|| ch=='/'|| ch=='^' || ch=='+'|| ch=='-')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
void operate(char ch)
{
    int a,b,val=0;
    a = pop();
    b = pop();
    switch(ch)
    {
        case '+': val = b+a;break;
        case '-': val = b-a;break;
        case '*': val = b*a;break;
        case '/': val = b/a;break;
    }
    push(val);
}
int evaluate(char s[])
{
    int i,l;
    l = strlen(s);
    int res = 0;
    for(i = 0; i<l; i++)
    {
        if(s[i]==')')
        {
            res = pop();
            break;
        }
        else if(isoperator(s[i])==1)
        {
            operate(s[i]);
        }
        else																																												
        {
            push(s[i]-'0');	
        }
    }
    return res;
}
int main()
{
    
        char s[100];
        printf("ENTER POSTFIX EXPRESSION : ");
        gets(s);
        strcat(s,")");
        int ans = evaluate(s);
        printf("%d\n",ans);
    return 0;
}
