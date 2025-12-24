#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
  int a =5,b=8;
  swap(a,b);
//   The swap will happen cuz it is a case of pass by address
  cout<<a<<endl<<b;
}