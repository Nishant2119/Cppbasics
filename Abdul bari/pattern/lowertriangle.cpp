#include<iostream>
using namespace std;
void lowertriangle(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (j>=i)
            
            {
                cout<<"*";
            }
            else 
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
}
int main()
{
 lowertriangle(4);
}