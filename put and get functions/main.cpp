#include <iostream>

using namespace std;

int main()
{
    char c;
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        cout<<endl;
        cin.get(c);

    }
    cout << "Hello world!" << endl;
    return 0;
}
