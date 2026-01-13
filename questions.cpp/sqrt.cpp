#include<iostream>
using namespace std;
int sqrt(int num)
{
  int beg =1;
  int end=num;
  int  mid = (beg+num)/2;
  while(beg<=end)
  {
    if (mid*mid>num)
    {
        end = mid-1;
    }
    else if(mid*mid<num)
    {
        beg=mid+1;
    }
    else 
    {
        return mid;
    }
    mid=(beg+end)/2;
  }
  return 0;
}
int main()
{
 cout<<sqrt(49);
}