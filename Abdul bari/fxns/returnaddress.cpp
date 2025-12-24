#include<iostream>
using namespace std;
int* arrayfun(int size)
{
    int *p = new int[size];
    for(int i =0;i<size;i++)
    {
        p[i]=i*2;
    }
    return p;
}
int main( )
{
    int *p = arrayfun(5);
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
}