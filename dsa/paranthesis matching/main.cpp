#include <iostream>

using namespace std;
struct stk
{
    int top;
    char *a;
};
void push(stk *s)
{
    s->top++;
    s->a[s->top]='(';
}
void pop(stk *s)
{
    s->top--;
}
int isempty(stk *s)
{
    return s->top==-1?1:0;
}
int isbal(char *exp)
{
    stk s;
    int i=1;
    while(exp[i])i++;
    s.a=new char[i];
    s.top=-1;
    i=0;
    while(exp[i])
    {
        if(exp[i]=='(')push(&s);
        else if(exp[i]==')')
        {
            if(isempty(&s))return 0;
            else pop(&s);
        }
        i++;
    }
    if(isempty(&s))return 1;
    return 0;
}
int main()
{
    cout << "Hello world!" << endl;
    char b[]="(a+b)+b((((b+d)+s)+d)+v)";
    cout<<isbal(b);
    return 0;
}
