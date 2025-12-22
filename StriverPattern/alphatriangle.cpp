#include <iostream>
using namespace std;
 void pattern(int n)
 { 
    char data ='A';
    for ( int i =1;i<=n;i++)
    {
         for (int j =1;j<=n;j++)
         {
             if (i>=j) cout<<data++;
         }
         cout<<endl;
         data='A';
    }
 }
 int main ()
 {
    pattern(5);
 }