#include<iostream>
using namespace std;
int main()
{
    int a =5,b=0;
    try
    {
        if(b==0)
            throw -1;
        cout<<"The value of a/b is:"<<a/b;
    }
    catch (int e)
    {
        cout<<"It is a case of arithmatic exception";
    }
}