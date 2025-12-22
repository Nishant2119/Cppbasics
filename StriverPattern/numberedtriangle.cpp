#include<iostream>
using namespace std;
 void pattern (int n)
 { int count =1;
     for (int i =1;i<=n;i++)
     {
        for (int j =1; j<=n;j++)
        {
            if (i>=j) cout<<count++<<" ";
        }
        cout<<endl;
     }
 }
int main()
{
 pattern(5);
}