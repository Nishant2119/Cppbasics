#include<iostream>
using namespace std;
class Outer
{
    public:
        int a;
        class Inner
        {
            public:
                void printer()
                {
                    cout<<"Hii there";
                }
        };
};
int main()
{
 Outer::Inner i;
 i.printer();
}