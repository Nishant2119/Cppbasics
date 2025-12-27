#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name;
public:
    int getid()
    {
        return id;
    }
    void setid(int id)
    {
        if(id>0) this->id=id;
    }
    string getname()
    {
        return name;
    }
    void setname(string name)
    {
        if(name!="") this->name=name;
    }
    Employee(int id,string name)
    {
        setid(id);
        setname(name);
    }
};
class Parttimeemp:Employee
{
    int wage;
    public:
        void setwage(int wage)
        {
           if(wage>=0) this->wage=wage;
        }
        int getwage(int wage)
        {
            return wage;
        }
        Parttimeemp(int id,string name,int wage):Employee(id,name)
        {
            setwage(wage);
        }
};
class Fulltime:Employee
{
    int salary;
    public:
        void setsalary(int salary)
        {
           if(salary>=0) this->salary=salary;
        }
        int getsalary()
        {
           return salary;
        }
        Fulltime(int id,string name,int salary):Employee(id,name)
        {
            setsalary(salary);
        }
};
int main()
{
    Fulltime e1(12,"John",33000);
   cout<< e1.getsalary();
    
}