#include<iostream>
#include<cmath>
using namespace std;
bool armstrong (int n)
{
    int num=n,data=n,sum=0;

    //Counting the digits of the number.
   int dcount=0;
    while(n>=1)
    {
      n=n/10;
      dcount++;
    }
    while(num>=1)
    {
      sum+=(int)pow(num%10,dcount);
      num/=10;
    }
    if (sum==data)
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
 cout<<armstrong(153);
}