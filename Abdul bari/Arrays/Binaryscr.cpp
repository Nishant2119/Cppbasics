#include<iostream>
using namespace std;
int  Binaryscr(int arr[],int n,int data)
{
    int begin=0, end=n-1, mid=(begin+end)/2;
    while(begin<=end)
    {
       if (arr[mid]>data)
       {
        end=mid-1;
       }
       else if (arr[mid]<data)
       {
        begin=mid+1;
       }
       else if (arr[mid]==data)
       {
        return mid;
       }
       mid=(begin+end)/2;
    }
    return -1;
}
int main()
{
   int arr[]={1,2,3,4,5,6};
   cout<<Binaryscr(arr,6,3);
}