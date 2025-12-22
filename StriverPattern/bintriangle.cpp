#include<iostream>
using namespace std;
void pattern (int n)
{
    for (int row =1;row<=n;row++)
    {
        for (int col =1;col<=n;col++)
        {
            if (row>=col)
            {
                if ((row+col)%2==0) 
                {
                    cout<<"1";
                }
                else 
                {
                    cout<<"0";
                }
            }
        }
        cout<<endl;
    }
}
int main()
{
     pattern(5);
}