#include <iostream>
using namespace std;
class Your;
class My
{
    private:
        int a;
    friend Your;
};
class Your
{ 
  public:
    My m;
    void fun()
    {
        cout<<m.a;
    }
};
int main()
{
    Your u;
    u.fun();
}