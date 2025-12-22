#include<iostream>
using namespace std;
 void solidifiedtriangle(int n)
 {
     for(int row =1; row<=n; row++)
     {
         for (int col=1; col<=n; col++)
         {
            if(row>=col)
            {
                cout<< "* ";
            }
            
         }
         cout<<"\n";
     }
 }
 int main()
 {
    solidifiedtriangle(4);
 }