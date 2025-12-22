#include<iostream>
#include<math.h>
using namespace std;
inline bool condition(int star,int row, int n)
 {
   if((abs(row)+abs(star))<n)
   {
    cout<<"*";
   }
   else 
   {
    cout<<" ";
   }
 }
 void print_diamond(int n)
 {
    for (int row = -1*(n-1); row<=n-1;row++)
    {
        for(int star=-1*(n-1); star<=n-1;star++)
        {
            if(condition(star,row,n))
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<< endl;
    }
 }
int main()
{
    print_diamond(4);
}