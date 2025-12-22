#include<iostream>
using namespace std;
int reversedigit(int n)
{ int symbol=1;
    if (n<0)
    {
     n*=-1;
     symbol=-1;
    }
    else if(n==0)
    {
        return 0;
    }
    int result=0;
    while(n>0)
   {  result*=10;
     result+=n%10;
     n=n/10;
   }
   result*=symbol;
   return result;
}
int main()
{
 cout<<reversedigit(747);
}