#include<iostream>
using namespace std;
class Car
{   
    public:
    virtual void start()=0;
    virtual void stop()=0;
};
class Innova:public Car
{
    public:
    void start()
    {
        cout<<"Innova starting.";
    }
    void stop()
    {
        cout<<"Innova stopped";
    }
};
class Swift:public Car
{
    public:
    void start()
    {
        cout<<"Swift starting.";
    }
    void stop()
    {
        cout<<"Swift stopped";
    }
};
int main()
{
   Car *p=new Innova();
   p->start();
   cout<<endl;
   p=new Swift();
   p->stop();
}