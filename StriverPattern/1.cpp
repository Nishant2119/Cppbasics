#include <iostream>
using namespace std;
 void opposite_triangle(int n)
 {
    for (int row =1;row<=n;row++)
    {
        for(int space=1;space<=n-row;i++)
        {
            cout<<"  ";
        }
        for(int star =1;star<=row;star++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
 }
int main()
{
    opposite_triangle(5);
}