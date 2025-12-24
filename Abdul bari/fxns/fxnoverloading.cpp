#include <iostream>
using namespace std;
int add(int a, int b)
{
 return a+b;
}
float add(float a, float b)
{
 return a+b;
}
int main()
{
  int num1=5,num2=4;
  cout<<add(num1,num2)<<endl;
  cout<<add(5.6f,89.12f);
}