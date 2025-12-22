#include<iostream>
using namespace std;
 void numrow(int n)
{
    for(int row =1; row<=n; row++)
    {
        for(int col = 1;col<=n;col++)
        {
            if (col>=row) cout<<col;
        }
        cout<<endl;
    }
}
int main()
{
 numrow(4);
}