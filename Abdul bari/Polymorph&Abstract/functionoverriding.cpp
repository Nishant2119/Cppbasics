#include<iostream>
using namespace std;
class Parent
{
    public:
        void display()
        {
            cout<<"Display of parent";
        }
};
class Child:public Parent
{
    public:
        void display()
        {
            cout<<"Display of child";
        }
};
int main()
{
    Child ch;
    //This will call the display fxn in the Child class.
    ch.display();
    //This will call the display fxn in the parent class.
    ch.Parent::display();
}