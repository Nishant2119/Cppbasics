#include<iostream>
using namespace std;
bool palindromechecker(int n)
{ 
    if (n<0)
    {
      n=n*-1;
    }
    int data=n,revnum=0;
    while(data>0)
    {
      revnum=(revnum*10)+(data%10);
      data=data/10;
    }
    if (revnum==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
 cout<< palindromechecker(5643);
}