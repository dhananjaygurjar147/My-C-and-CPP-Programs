#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[100],title[100];
    cin.getline(name,100);
    cin.getline(title,100);
    int b=strlen(title);
    int a=strlen(name);
    cout.write(name,a+b);
    cout<<endl;
    cout.write(name,a).write(title,b);
    cout<<endl;
    cout.write(name,a+b);
    cout << "Hello world!" << endl;
    return 0;
}
