#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    char a[]={"asd"};
for(int i=0;i<2;i++)
    cout <<setw(30)<<setiosflags(ios::left)<<a<< "Hello world!" <<setw(20)<<"nice"<< endl;
    return 0;
}
