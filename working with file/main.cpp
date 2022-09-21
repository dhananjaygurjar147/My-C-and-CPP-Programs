#include <iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream inf("Rohan");
    char s[30];
    float cost;
    inf.getline(s,5);
    inf>>cost;

    cout<<endl;
    cout<<s<<cost<<endl;
    inf.close();
    cout << "Hello world!" << endl;
    return 0;
}
