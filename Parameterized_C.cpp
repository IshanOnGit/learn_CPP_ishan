#include<iostream>
using namespace std;
class student{
    public:
    int roll_num;
    string name;
//Default Constructor
    student(int a){
        cout<<a<<endl;
        cout<<"Parameterized Constructor invoked"<<endl;
    }

};

int main()
{
    student obj1(10);
    student obj2(20);
    return 0;
}