#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("country");

    fout<<"USA"<<endl;
    fout<<"UK"<<endl;
    fout<<"SK"<<endl;

    fout.close();
    fout.open("capital");

    fout<<"Washington"<<endl<<"London"<<endl<<"Seoul"<<endl;

    fout.close();

    const int N=80;
    char line[N];

    ifstream fin;
    fin.open("country");
    cout<<"Contents of country: "<<endl;
    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    fin.open("capital");
    cout<<"Contents of capital"<<endl;
    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    cout << "Hello world!" << endl;
    return 0;
}
