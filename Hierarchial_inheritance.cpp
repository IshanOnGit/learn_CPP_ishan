#include<iostream>
using namespace std;
class TataGroup{
    public:
    string c1 = "This is Tata Group";

};
class TataMotors : public TataGroup {
    public:
    string t2 = "We are Tata Motors, a division of Tata Group";
    void output()
    {
        cout<<c1<<endl;
        cout<<t2<<endl;
    };

};
class TataSteel : public TataGroup{
   public:
    string t3 = "We are Tata steel, a division of Tata Group";
    void display()
    {
        cout<<c1<<endl;
        cout<<t3<<endl;
    };
};
int main()
{
    TataGroup Tata1;
    TataMotors Tatasub1;
    TataSteel Tatasub2;
    Tatasub1.output();
    Tatasub2.display();
    return 0;
}
