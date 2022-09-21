#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream rfile;
    ofstream wfile;
    wfile.open("Text");
    wfile<<"dhananjay gurjar\n"<<"payal gurjar\n"
    <<"palak gurjar\n"<<"pranav gurjar\n"<<"2345"<<endl;
    wfile.close();
    rfile.open("Text");
    wfile.open("New");
    char c;int i;
    while(rfile.eof()==0)
    {
        rfile.get(c);
        if(c!=' ')
        {
            wfile.put(c);
            i=0;
        }
        else if(i==0)
        {
            wfile.put(' ');
            i=1;
        }
    }
    rfile.close();
    wfile.close();
    rfile.open("New");
    while(rfile.eof()==0)
    {
        rfile.get(c);
        cout<<c;
    }
    cout << "Hello world!" << endl;
    return 0;
}
