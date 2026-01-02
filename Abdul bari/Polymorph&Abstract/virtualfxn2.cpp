#include<iostream>
using namespace std;
class BasicCar
{
    public:
        void start()
        {
            cout<<"Basic car started.";
        }
};
class AdvanceCar:public BasicCar
{
    public:
        void start()
        {
            cout<<"Advance car started.";
        }
};
int main()
{
    BasicCar *p = new AdvanceCar();
    p->start();
}