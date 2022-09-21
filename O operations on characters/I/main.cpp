#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    char s[80];
    cout<<"Enter the string: ";
    cin>>s;
    int len = strlen(s);
    fstream file;
    file.open("capital",ios::in|ios::out);
    file.seekg(-50,ios::end);
    for(int i=0;i<len;i++)
    {
        file.put(s[i]);

    }
    file.seekg(0);
    char c;
    while(file)
    {
        file.get(c);
        cout<<c;
    }
    cout << "Hello world!" << endl;
    return 0;
}
