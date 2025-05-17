#include<iostream>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"Base class constructor called"<<endl;
    };
};
class derived : public base{
    public:
    derived()
    {
        cout<<"Derived class constructor called"<<endl;
    };
};
int main()
{
   // base obj0;
    derived obj1;
    return 0;   
}
//If we call the constructor of derived class, then first it will call the constructor of base class then it will move to the constructor of the derived class