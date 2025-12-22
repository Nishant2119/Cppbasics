#include<iostream>
using namespace std;
void butterfly(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j =1;j<=i;j++)
        {
            if (i<=5)
            {
                cout<<"*";
            }
        }
        for(int space =1;space<=10-i*2;space++)
        {
            cout<<" ";
        }
        for (int j =1;j<=i;j++)
        {
            if (i<=5)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
        

    }
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=5-i;j++)
        {
            cout<<"*";
        }
        for(int space = 1;space <=i*2;space++)
        {
            cout<<" ";
        }
        for(int j =1;j<=5-i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
 butterfly(5);
}