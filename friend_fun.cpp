// A friend function is a function that can access class' private and protectecd members without being a part of it that class.
//Friend fucntions are declared within the class using friend keyword, but their definition can be outside the class.
#include <iostream>
using namespace std;
class add{
    int x;
    int y;
    public:
    add() //using constructor we initialze the value of the data members as object is created
    {
        x=19;
        y=29;
    }
    friend int sum(add &obj); // We pass class_name and &obj so that friend function can know which class' data memebers/function to access and what is the object of that class.
};
int sum(add &obj){
    return obj.x+obj.y;
};
int main()
{
    add obj1;
    int result = sum(obj1);
    cout<<"Sum is: "<<result;
    return 0;
}