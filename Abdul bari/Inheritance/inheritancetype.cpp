#include<iostream>
using namespace std;
class Parent
{
    int age;
    int height;
    public:
        Parent(int age=0,int height=0)
        {
            setage(age);
            setheight(height);
        }
        int getheight()
        {
            return height;
        }
        int getage()
        {
            return age;
        }
        void setheight(int height)
        {
            this->height=height;
        }
        void setage(int age)
        {
            this->age=age;
        }
};
class Child:public Parent
{
   bool healthy;
   public:
    Child(int age=0,int height=0)
    {
        setage(age);
        setheight(height);
    }
    void sethealth(bool status)
    {
        healthy=status;
    }
};
class Grandchild:public Child
{
    bool student;
    public:
        Grandchild(int age=0,int height=0)
        {
          setage(age);
          setheight(height);
        }
        void setisstudent(bool status)
        {
            student=status;
        }
        bool getisstudent()
        {
            return student;
        }
};
int main()
{
  Grandchild abs;
  cout<<abs.getage();
  cout<<abs.getisstudent();
}