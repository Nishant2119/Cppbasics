#include<iostream>
using namespace std;
int division(int a,int b)
{
    if (b==0)
     {throw -1;
     }
    return a/b;
}
int main()
{ int a=5,b=0;
    try 
    {
        cout<<division(a,b);
    }
    catch(int i)
    {
        if(i==-1)
        {
            cout<<"This is a arithmatic exception.";
        }
    }
}