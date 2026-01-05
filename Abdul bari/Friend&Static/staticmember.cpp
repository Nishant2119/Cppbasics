#include<iostream>
using namespace std;
class Test
{
    public:
        int a;
        static int count;
    static int getcount()
    {
        return count;
    }
};
int Test::count=0;
int main()
{
 Test t;
 cout<<t.getcount();
 cout<<Test::getcount;
}