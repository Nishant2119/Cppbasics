#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int a=5,b=3;
    swap(a,b);
    // The swap will happen cuz we are using the same variable in the swap function also.
    cout<<"The swapped values of a and b are:"<<a<<"&"<<b;
}