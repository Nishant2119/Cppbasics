#include <iostream>
using namespace std;
 void pattern(int n)
 { 
    char c ='A';
    for(int i =1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<c<<"\t";
        }
        c++;

        cout<<endl;
    
    }
 }
int main()
{
    pattern(5);
}