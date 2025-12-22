#include<iostream>
using namespace std;
int linearsearch(int arr[], int n , int data)
{
    for (int i =0;i<n;i++)
    {
        if(arr[i]==data)
        return i;
    }
    return -1;
}

int main()
{
  int arr[]={1,25,23,7,3,78};
  cout<<linearsearch(arr,6,3);
}