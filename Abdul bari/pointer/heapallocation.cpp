#include<iostream>
using namespace std;
//Dynamic array using heap in cpp.
void heaparray()
{
    int *p = new int[5];
   for (int i =0;i<5;i++)
   {
    p[i]=i;
   }
   for (int i =0;i<5;i++)
   {
       cout<<p[i]<<endl;
   }
   delete []p;
   p = new int[3];
   for(int i =0;i<3;i++)
   {
    cout<<p[i];
   }
}
int main()
{
 int arr[7];
//Calculating the size of the array.
 cout<<sizeof arr/sizeof arr[0];
 heaparray();
}