#include <iostream>
using namespace std;
class Rectangle
{
 private:
    int length;
    int breadth;
public:
    Rectangle(int length=0,int breadth=0);
    int getlength();
    void setlength(int length);
    void setbreadth(int breadth);
    int getbreadth();
    int rectanglearea();
};
class Cuboid:public Rectangle
{
 private:
    int height;
 public:
    Cuboid(int length=0,int breadth=0,int height=0);
    int volume();
    int getheight();
    void setheight(int height);
};
//****************************************
/************************** 
 * 
*/
int main()
{
  Rectangle r(5,8);
  cout<<r.rectanglearea()<<endl;
  Cuboid c(5,9,1);
   cout<<c.volume();
   cout<<c.getlength();
}
/********************************
 * ******************************
 */
 Cuboid::Cuboid(int length,int breadth,int height)
       :Rectangle(length,breadth)
    {
        // setlength(length);
        // setbreadth(breadth);
        setheight(height);
    }
    int Cuboid::volume()
    {
        return getlength()*getbreadth()*height;
    }
    int Cuboid::getheight()
    {
        return height;
    }
    void Cuboid::setheight(int height)
    {
        this->height=height;
    }
     int Rectangle::getlength()
    {
       return length;
    }
    void Rectangle::setlength(int length)
    {
        this->length=length;
    }
    void Rectangle::setbreadth(int breadth)
    {
        this->breadth=breadth;
    }
    int Rectangle::getbreadth()
    {
        return breadth;
    }
    int Rectangle::rectanglearea()
    {
        return length*breadth;
    }
    Rectangle::Rectangle(int length,int breadth)
    {
        setlength(length);
        setbreadth(breadth);
    }