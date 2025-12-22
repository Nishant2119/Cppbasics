#include<iostream>
using namespace std;
void numdigits(int num)
{ if(num<0)
  {
    num=num*-1;
  }
    while(num>=1)
   {
    cout<<num%10<<endl;
     num/=10;
    }   
   

}
 int main()
 {
 numdigits(788);
 }
