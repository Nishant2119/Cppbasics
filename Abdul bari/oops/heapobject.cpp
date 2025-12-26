#include<iostream>
using namespace std;
class Rectangle
{ public:
   int length;
   int breadth;
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
  Rectangle *r1 = new Rectangle();
  r1->length=4;
  r1->breadth=6;
  cout<<"The area of the rectangle is:"<<r1->area();
  delete r1;
r1=nullptr;

}