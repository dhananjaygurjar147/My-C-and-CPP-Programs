#include <iostream>
#include<fstream>
using namespace std;
class store
{
    char name[30];
    char no[30];
public:
    void readdata()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the number: \n";
        cin>>no;
    }
    void display()
    {
        cout<<name<<"          "<<no<<endl;
    }
};
int main()
{
    fstream file;
    ofstream wfile;
    wfile.open("list");
    wfile.close();
    file.open("list",ios::in|ios::out);
    store item[2],s[2];
    for(int i=0; i<2; i++)
    {
        item[i].readdata();
        file.write((char *)&item[i],sizeof(item[i]));

    }
    file.seekg(0);
    for(int i=0; i<2; i++)
    {
        file.read((char *)&s[i],sizeof(s[i]));
        s[i].display();

    }
    file.close();
    cout << "Hello world!" << endl;
    return 0;
}
