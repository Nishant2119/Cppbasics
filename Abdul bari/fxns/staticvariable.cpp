#include<iostream>
using namespace std;
int nishu(int i )
{
  static int value = i;
  cout<<value;
}
int main()
{
  nishu(5);
  nishu(6);
  nishu(7);
  //Hence in a static variable declaration happens only once.
}