#include<iostream>
using namespace std;
class Test
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    friend void fun();
};
void fun()
{
    Test t;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c;
}
int main()
{
    fun();
}