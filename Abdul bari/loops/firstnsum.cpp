#include<iostream>
using namespace std;
 int firstnsum(int n)
 {
    int sum =0;
    for(int i =1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
 }
int main()
{
  cout<<firstnsum(7);
}