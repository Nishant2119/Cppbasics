#include<iostream>
 using namespace std;
  void solidsquare(int n)
{
  for(int row =1; row<=n; row++)
  {
     for  (int col=1; col<=n; col++)
     {
        cout<<"* ";
     }
     cout<<endl;
  }
}
 int main()
 {
     int n=5;
     solidsquare(n);
 }