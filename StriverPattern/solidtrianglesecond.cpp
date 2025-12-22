#include <iostream>
using namespace std;
int solidtriangle(int n)
{
    for (int row =1 ;row<=n; row++)
    {
        for (int col =1;col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }s
}
int main()

{
  solidtriangle(4);
}