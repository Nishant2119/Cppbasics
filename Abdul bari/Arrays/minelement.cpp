#include<iostream>
using namespace std;
int minint(const int arr[],int n )
{
    int mindigit=arr[0];
    for (int i =0;i<n;i++)
    {
        if (arr[i]<mindigit)
        {
            mindigit=arr[i];
        }
    }
    return mindigit;
}
int main()
{ int arr[]={1,3,2,7,3,8};
    cout<<minint(arr,6);
}