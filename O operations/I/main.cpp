#include <iostream>

using namespace std;

int main()
{
    cout<< "fill"<<endl;
    cout.fill('.');
   // cout.setf(ios::left,ios::adjustfield);
  cout.setf(ios::internal,ios::adjustfield);
  cout.setf(ios::showpoint);
  cout.setf(ios::showpos);
    cout.width(25);
    cout<<5240.00<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
