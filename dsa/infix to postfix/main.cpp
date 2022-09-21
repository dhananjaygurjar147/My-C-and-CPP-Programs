#include <iostream>

using namespace std;
struct stk
{
    int top;
    char *a;
};
void push(stk *st,char c)
{
    st->top++;
    st->a[st->top]=c;
}
char pop(stk *st)
{
    char x=st->a[st->top];
    st->top--;
    return x;
}
int isempty(stk *st)
{
    return st->top?0:1;
}
int pre(char c)
{
    if(c=='+'||c=='-')return 1;
    if(c=='*'||c=='/')return 2;
    return 0;
}
int operand(char c)
{
    if((c<='Z'&&c>='A')||(c<='z'&&c>='a'))return 1;
    return 0;
}
char * postfix(char *exp)
{
    int i=1;
    while(exp[i])i++;
    stk s;
    s.a=new char[i];
    char *post=new char[i];
    s.top=0;
    s.a[0]=0;
    i=0;int j=0;
    while(exp[i])
    {
        if(operand(exp[i]))
        {
            post[j++]=exp[i];
        }
        else
        {
            if(pre(exp[i])>pre(s.a[s.top]))push(&s,exp[i]);
            else
            {
                post[j++]=pop(&s);
                i--;
            }
        }
        i++;
    }
    while(!isempty(&s))post[j++]=pop(&s);
    return post;
}
int main()
{
    cout << "Hello world!" << endl;
    char b[]="a+b-c*d";
    char *c=postfix(b);
    cout<<b<<endl<<c;
    return 0;
}
