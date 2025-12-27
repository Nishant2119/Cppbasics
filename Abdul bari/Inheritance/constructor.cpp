#include <iostream>
using namespace std;
class Base
{
  public:
    Base()
    {
        cout<<"Default Base "<<endl;
    }
     Base(int x)
    {
        cout<<"Param of base "<<x<<endl;
    }

};
class Derived:Base
{
    public:
        Derived()
        {
            cout<<"Default derived"<<endl;
        }
        Derived(int y)
        {
            cout<<"param of derived:"<<y<<endl;
        }
        Derived(int y,int x):Base( x)
        {
            cout<<"param2 of derived:"<<y<<endl;
        }
};
int main()
{
    Derived d(5,6);
    
}