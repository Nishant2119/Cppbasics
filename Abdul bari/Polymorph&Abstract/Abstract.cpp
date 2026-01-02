#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void fun2()=0;
};
class Derived:Base
{
    public:
        void fun2()
        {
            cout<<"This is second fxn.";
        }
};
int main()
{
    Derived d;
    d.fun2();
}