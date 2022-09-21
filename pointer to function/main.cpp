#include <iostream>

using namespace std;
void(*Funptr)(int,int);
void add(int i,int j)
{
  cout<<i<<"+"<<j<<"="<<i+j<<endl;
}
void subtract(int i,int j)
{
    cout<<i<<"-"<<j<<"="<<i-j<<endl;
}
int main()
{
    Funptr = &add;
    Funptr(1,2);
    Funptr=&subtract;
    Funptr(3,2);
    cout << "Hello world!" << endl;
    return 0;
}
