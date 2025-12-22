#include<iostream>
using namespace std;
void burfi(int n)
{ 
 
  for(int i =1;i<=n;i++)
  {
     for (int j=1;j<=n-i;j++)
     {
        cout<<"*";
     }
     for(int space=1;space<=i*2-2;space++)
     {
        cout<<" ";
     }
      for (int j=1;j<=n-i;j++)
     {
        cout<<"*";
     }
    cout<<endl;
  }
  for(int i =n;i>=1;i--)
  {
    for (int j=n-i;j>=1;j--)
    {
        cout<<"*";
    }
    for(int space =i*2-2;space>=0;space--)
    {
        cout<<" ";
    }
    for (int j=n-i;j>=1;j--)
    {
        cout<<"*";
    }
    cout<<"\n";
    
  }
}
int main()
{
 burfi(5);
}