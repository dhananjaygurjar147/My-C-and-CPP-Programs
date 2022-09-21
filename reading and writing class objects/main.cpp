#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class inventory
{
    char name[20];
    int code;
    float cost;
public:
    void readdata(void)
    {
        cout<<"Enter the name: ";cin>>name;
        cout<<"Enter the code: ";cin>>code;
        cout<<"Enter the cost: ";cin>>cost;
    }
    void writedata(void)
    {
        cout<<setiosflags(ios::left)<<setw(10)<<name<<setiosflags(ios::right)
        <<setw(10)<<code<<setprecision(2)<<setw(10)<<cost<<resetiosflags(ios::right)<<endl;
    }
};
int main()
{
    inventory item[3],s[3];
    fstream file;
    file.open("stock",ios::in|ios::out);

    file.seekg(0);
    cout<<"\nOutput\n";
    for(int i=0;i<3;i++)
    {
        file.read((char *)& s[i],sizeof(s[i]));
        s[i].writedata();
    }
    file.close();
    cout << "Hello world!" << endl;
    return 0;
}
