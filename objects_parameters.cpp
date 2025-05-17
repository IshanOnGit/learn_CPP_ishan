#include<iostream>
using namespace std;
class class_1
{
    public:
    int x;
    void setVal(int val)
    {
         x = val;
    };
    void show()
    {
        cout<<x<<endl;
    }
};
void display(class_1 &obj)
{
    obj.show();
};
int main()
{
    class_1 obj1;
    obj1.setVal(10);
    display(obj1);
    return 0;
}