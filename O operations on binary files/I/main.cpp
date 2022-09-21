#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const char *filename="binary";
int main()
{
    float height[4]={155.5,2.4,3.4,5.5};

    ofstream outfile;
    outfile.open("binary");

    outfile.write((char *)& height,sizeof(height));
    outfile.close();
    for(int i=0;i<4;i++)
        height[i]=0;
    ifstream infile;
    infile.open("binary");
    infile.read((char *)&height,sizeof(height));

    for(int i=0;i<4;i++)
    {
        cout.setf(ios::showpoint);
        cout<<setw(10)<<setprecision(2)<<height[i];
    }
    infile.close();
    cout << "Hello world!" << endl;
    return 0;
}
