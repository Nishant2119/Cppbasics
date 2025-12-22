#include <iostream>
using namespace std;
 void patternrownum(int n)
 {
     for (int row =1; row<=n; row++)
     {
         for(int col=1; col<=row; col++)
         {
            cout<<row;
         }
         cout<<endl; 
     }
 }
int main ()  
{
   patternrownum(4);
}