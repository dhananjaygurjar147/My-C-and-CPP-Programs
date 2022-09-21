#include <iostream>

using namespace std;
ostream & unit(ostream &dout)
{
    dout<<"inches";
    return dout;
}
int main()
{
    cout << "Hello world!" << endl<<unit  ;
    return 0;
}
