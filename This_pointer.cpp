#include<iostream>
using namespace std;
class demo{
    int d;
    public:
    demo(int d){
        this -> d=d; //this -> local variable (d) = int d (data member d)
        // this pointer tells the compiler to use data member instead of function variable
        //Here with the help of this pointer we assign the value of data memeber d to the function variable d
        //d++; // This increment will still return 10 because it is the increment in function varible.
    }
    void show(){
        cout<<"The value is: "<<d<<endl;
    }
};
int main()
{
    demo obj(10);
    obj.show();

    return 0;
}