#include<iostream>
using namespace std;
long  int factorial(int n)
{
    long int data=1;
    if (n>=0)
    {
    for (int i =1;i<=n;i++)
    {
        data*=i;
    }
    return data;
    }
  
    else 
    {
        return -1;
    }
}
int main ()
{
  cout<<factorial(5);
}