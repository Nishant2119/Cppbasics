#include<iostream>
using namespace std;
bool is_prime(int n)
{ if (n<=1)
  {
    return false;
  }
  else 
  {

  
    for(int i =2;i<n;i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
   }
}
int main()
{
  cout<<is_prime(7);
}