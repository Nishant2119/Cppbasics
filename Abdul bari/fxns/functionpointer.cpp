#include <iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int diff(int a, int b)
{
    return a-b;
}
int main()
{
  int (*fp)(int,int);
  fp=sum;
  cout<<fp(10,4);
  fp=diff;
  cout<<fp(10,3);

}