#include<iostream>
using namespace std;
class Shape
{
  public:
    virtual int area()=0;
    virtual int perimeter()=0;
};
class Rectangle:public Shape
{ 
    private:
        int length;
        int breadth;
    public:
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }
        Rectangle(int length,int breadth)
        {
            this->length=length;
            this->breadth=breadth;
        }

};
class Circle: public Shape
{
    private:
        int radius;
    public:
        int area()
        {
            return (22*radius*radius)/7;
        }
        int perimeter()
        {
            return (2*22*radius)/7;
        }
        Circle(int radius)
        {
            this->radius=radius;
        }
};
int main()
{
    Shape *p;
    p= new Rectangle(4,6);
    cout<<"Rectangle:"<<endl;
    cout<<"The area of the rectangle is:"<<p->area()<<endl;
    cout<<"The perimeter of the rectangle is:"<<p->perimeter()<<endl;
    p=new Circle(7);
    cout<<"Circle:"<<endl;
    cout<<"The area of the circle is:"<<p->area()<<endl;
    cout<<"The perimeter of the circle is:"<<p->perimeter()<<endl;

}