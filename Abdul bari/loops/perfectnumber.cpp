#include<iostream>
using namespace std;
bool perfect_number(int n)
{ if(n>=0)
  {
    int sum=0;
    for (int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
    }
    if (sum==n)
    {
      return true;
    }
    else 
    {
        return false;
    }
 }  
 else 
{
    return false;
}
}
int main()
{
  perfect_number(7);
}