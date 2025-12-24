#include<iostream>
using namespace std;
 void swap(int a, int b)
 {
    int temp=a;
    a =b;
    b=temp;

 }
int main()
{
  int a=5,b=3;
  swap(a,b);
  // The swap won't happen cuz it is a pass by value. 
  cout<<a<<endl<<b;
}