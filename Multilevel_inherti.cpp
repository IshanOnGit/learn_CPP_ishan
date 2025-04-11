#include<iostream>
using namespace std;
class Volkswagen{
    public:
    void display()
    {
        cout<<"THE VOLKSWAGON GROUP"<<endl;
    }
};
class BMW : public Volkswagen{
    public:
    void BMW_display(){
        cout<<"BMW is a subsidairy of Volkswagon Group"<<endl;

    };
};
class RR : public BMW{
    public:
    void RR_display()
    {
        cout<<"Rolls Royce is a subsidairy of BMW";
    };
};
int main(){
    Volkswagen v1;
    BMW b1;
    RR r1;
    r1.display();
    
    r1.BMW_display();
    r1.RR_display();
    return 0;
}
