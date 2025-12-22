#include<iostream>
using namespace std;
 void patternz(int n)
 {
    for (int i =0;i<=n;i++)
    {
        for(int j =0;j<=n;j++)
        {
          if (i==0||i==n||(i+j==n) )
            {
                cout<<"* ";
            }
          else 
          {
            cout<<"  ";
          }
         
        }
        cout<<endl;

    }
 }
int main()
{
 patternz(5);
}