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
   Rectangle r1,r2;
   r1.length=5;
   r1.breadth=6;
   cout<<"The area of the rectangle is:"<<r1.area();
   cout<<"The perimeter of the rectangle is:"<<r1.perimeter();

}