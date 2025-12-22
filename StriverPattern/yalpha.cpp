#include<iostream>
using namespace std;
 void fun(int n)
 {
   for(int i =1;i<=n;i++)
   {
    for (int j =1;j<=n;j++)
    {
        if(i==j&&i<=n)
        {
            cout<<"* ";
        }
        else if (i+j==n&&i<=n)
        {
            cout<<"* ";
        }
        else if (i==n/2)
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
 fun(6);
}
