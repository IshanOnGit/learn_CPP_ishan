#include<iostream>
using namespace std;
class INDspace{
    protected:
    string s1 = "ISRO";
    string s2 = "Agnikool";

};
class USspace {
    protected:
    string s3 = "NASA";
    string s4 = "SpaceX";
};
class ALLspace : public INDspace, public USspace{
    public:
     
    void display()
    {
        cout<<""<<s1<<" "<<s2<<"  "<<s3<<"  "<<s4;
    }
};
int main()
{
    ALLspace agencies;
    agencies.display();
    return 0;
}