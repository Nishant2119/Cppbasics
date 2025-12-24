#include<iostream>
#include<climits>
using namespace std;
int maxfinder(int a, int b=INT_MIN, int c=INT_MIN)
{
    return a>b&&a>c?a:b>c?b:c;
}
int main()
{
  cout<<maxfinder(5);
}