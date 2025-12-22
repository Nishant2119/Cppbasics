#include<iostream>
using namespace std;

 void numrow(int n)
{
    for(int row =0; row<n; row++)
    {
        for(int col = 0;col<n-row-1;col++)
        {
             cout<<' ';
        }
         for(int i =0;i<=(2*row)+1;i++)
      {
        cout<<"*";
      }
       for(int col = 0;col<n-row-1;col++)
        {
             cout<<' ';
        }
        cout<<endl;
    }
}
int main()
{
 numrow(4);
}
