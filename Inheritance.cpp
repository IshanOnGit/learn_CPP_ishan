#include<iostream>
using namespace std;
class Vehicle {
    public:
    string C1 = "BMW";
    string C2 = "Ford";
    void out(){
        cout<<C1<<endl;
        cout<<C2<<endl;
    }

};
class BMW : public Vehicle {
    public:
    void display()
    {
        cout<<C1<<" inherited from class Vehicle"<<endl;
    }
};
int main() 
{
    Vehicle v1;
    v1.out();
    BMW b1;
    b1.display();

}