#include<iostream>
using namespace std;
 void pattern(int n)
 {
    for(int i =1;i<=n;i++)
    { char ch ='A';
        for (int space =1;space<=n-i+1;space++)
        {
            cout<<" ";
        }
        for (int j =1;j<=(2*i)-1;j++)
        {
          if (j<=(j/2)+2) 
          {
            cout<<ch++;
          }
          else
          {
            cout<<--ch;
          }
        }
        ch='A';
        for (int space =1;space<=n-i+1;space++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
    
 }
int main()
{
    pattern(5);
}