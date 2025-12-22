#include<iostream>
using namespace std;
 void pattern( int n )
 {
     for (int row =1;row <=n; row++)
     {
        for (int j =1; j <=row;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=2*(n-row);k++)
        {
            cout<<" ";
        }
        for (int j =row; j >=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
     }
 }
int main()
{
 pattern(5);
}