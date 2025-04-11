#include<iostream>
using namespace std;
class student{
    public:
    int roll_num;
    string name;
//Default Constructor
    student(){
        cout<<"Default Constructor invoked"<<endl;
    }
    ~student() {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    student obj1;
    //cout<<"Helllo"<<endl;
    return 0;
}