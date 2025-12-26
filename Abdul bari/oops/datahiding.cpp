#include<iostream>
using namespace std;
class Rectangle
{ private:
   int length;
   int breadth;
  public:
   void setlength(int l)
   {
     if(l>=0)
     {
        length=l;
     }
     else
     {
        cout<<"invalid length";
     }
   }
      void setbreadth(int b)
   {
     if(b>=0)
     {
        breadth=b;
     }
     else
     {
        cout<<"invalid breadth";
     }
   }
   int getlength()
   {
    return length;
   }
   int getbreadth()
   {
    return breadth;
   }
   int area()
   {
    return length*breadth;
   }
   int perimeter()
   {
     return 2*(length+breadth);
   }
};
int main()
{
  Rectangle r1;
  r1.setlength(5);
  r1.setbreadth(6);
  cout<<r1.area();
}