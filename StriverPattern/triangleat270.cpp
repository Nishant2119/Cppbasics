#include <iostream>
using namespace std;
 void pattern(int n)
 {
    for (int row =1; row<=2*n-1; row++)
    { int stars = row;
        if (stars>n) stars = 2*n-row;
        for (int i =1; i<=stars; i++)
        {
            cout<<"* ";
        }
        cout <<endl;
    }
 }
int main()
{
     pattern (5);

}