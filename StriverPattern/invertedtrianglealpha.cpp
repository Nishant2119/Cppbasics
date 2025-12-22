#include<iostream>
using namespace std;
void pattern(int n)
{
     char c ='E';
  for (int i =1;i<=n;i++)
  {
    int j;
    for ( j =1;j<=i;j++)
    {
        cout<<c++;
    }
    c='E';
    c = c-i+1;

    cout<<endl;
  }
}
int main ()
{
 pattern(5);
}