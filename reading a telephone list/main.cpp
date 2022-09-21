#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    ifstream file;
    ofstream wfile;
    wfile.open("list");
    wfile<<"john 2345\ndhananjay 45678\npayal 5855959\npalak 84849\n";
    wfile.close();
    file.open("list");
    char c,no[80],line[80];
    int i;
    while(file.eof()==0)
    {
        i=0;
        file.get(c);
        while(c!=' ')
        {
            line[i++]=c;
            file.get(c);
        }
        line[i]='\0';
        i=0;
        file.get(c);
        while(c!='\n')
        {
            no[i++]=c;
            file.get(c);
        }
        no[i]='\0';
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(20)<<line;
        cout.setf(ios::right,ios::adjustfield);
        cout<<setw(20)
            <<no<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
