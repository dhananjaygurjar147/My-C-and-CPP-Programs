#include <iostream>

using namespace std;

class shape
{
protected:
    double x,y;
public:
    void getdata(double a,double b=0)
    {
        x=a;y=b;
    }
    virtual void display_area(){

        cout<<"Area of triangle: "<<0.5*x*y<<endl;
    }

};
class triangle:public shape
{
public:
    void display_area()
    {
        cout<<"Area of triangle: "<<0.5*x*y<<endl;
    }
};

class rectangle:public shape
{
   public:
       void display_area()
       {
           cout<<"Area of rectangle: "<<x*y<<endl;
       }
};
class circle:public shape
{
public:
    void display_area()
    {
        cout<<"Area of circle: "<<3.14*x*x<<endl;
    }
};
int main()
{
    triangle t;
    rectangle r;
    circle c;
    shape *ptr;
    ptr=&t;
    ptr->getdata(5,3);
    ((triangle *)ptr)->display_area();
    ptr=&r;
    ptr->getdata(2,3);
    ((rectangle *)ptr)->display_area();
    ptr=&c;
    ptr->getdata(2);
    ((circle *)ptr)->display_area();
    cout << "Hello world!" << endl;
    return 0;
}
