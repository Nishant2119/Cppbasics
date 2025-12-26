#include<iostream>
using namespace std;
class Rectangle
{ private:
   int length;
   int breadth;
  public:
  Rectangle(int l,int b);
 
  Rectangle(Rectangle &r)
  {
    length=r.length;
    breadth=r.breadth;
  }
   void setlength(int l)
   {
    if(length>=0) length=l;
   }
   void setbreadth(int b)
   {
    if(breadth>=0) breadth=b;
   }
   int area();
};

int main()
{
Rectangle r(5,8);
Rectangle r1(r);
cout<<r1.area();
}
 int Rectangle::area()
 {
    return length*breadth;
 }
 Rectangle::Rectangle(int l, int b)
  {
    setlength(l);
    setbreadth(b);
  }