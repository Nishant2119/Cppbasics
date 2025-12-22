#include<iostream>
using namespace std;
void freq_calc(int arr[],int n)
{ 
    int poscount=0,negcount=0,zerocount=0;
    for (int i =0;i<n;i++)
    {
      if (arr[i]>0)
      {
        poscount++;
      }
      else if (arr[i]<0)
      {
        negcount++;
      }
      else 
      {
        zerocount++;
      }
    }
    cout<<"The frequency of positive and negative integers is:"<<poscount<<endl;
    cout<<"The frequency of negative integers is:"<<negcount;
}
int main()
{
 int arr[]={1,3,43,6,34,7,-3};
 freq_calc(arr,7);
}