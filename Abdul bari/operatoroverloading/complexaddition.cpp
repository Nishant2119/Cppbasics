#include<iostream>
using namespace std;
class Complex
{
    private:
     int real;
     int img;
    public:
     Complex(int real=0,int img=0)
     {
        this->real=real;
        this->img=img;
     }
    Complex add(Complex c);
     int getreal();
    
    int getimg();
   
  Complex operator+(Complex c);
};
int main()
{
  Complex c1(5,7);
  Complex c2(3,8);
  Complex c3;
  c3=c1+c2;
  cout<<c3.getreal()<<"+i"<<c3.getimg();
  
}
  Complex Complex::add(Complex c)
     {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
     }
     int Complex::getreal()
     {
        return real;
     }
    int Complex:: getimg()
    {
        return img;
    }
  Complex Complex ::operator+(Complex c)
  {
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
  }