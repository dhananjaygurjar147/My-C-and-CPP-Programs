#include<iostream>

using namespace std;

const int size=3;
template <class T>
class Vector
{
    T* v;
public:
    Vector()
    {
        v=new T[size];
        for(int i=0;i<size;i++)
            v[i]=0;
    }
    Vector(T* a)
    {
        for(int i=0;i<size;i++)
            v[i]=a[i];
     }
     T operator*(Vector &y)
     {
         T sum=0;
         for(int i=0;i<size;i++)
            sum+=this->v[i]*y.v[i];
         return sum;
     }

};

int main()
{
    int x[3]={1,2,3};
    int y[3]={4,5,6};
    Vector <int> v1;
    Vector <int> v2;
    v1 = x;
    v2 = y;
    int R = v1*v2;
    cout<<"R = "<<R<<"\n";
    return 0;
}
