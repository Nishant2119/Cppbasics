#include<iostream>
using namespace std;
int maxint(const int arr[],int n )
{
    int maxdigit=arr[0];
    for (int i =0;i<n;i++)
    {
        if (arr[i]>maxdigit)
        {
            maxdigit=arr[i];
        }
    }
    return maxdigit;
}
int main()
{ int arr[]={1,3,2,7,3,8};
    cout<<maxint(arr,6);
}