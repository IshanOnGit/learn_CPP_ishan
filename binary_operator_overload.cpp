#include<iostream>
using namespace std;
class MATH {
    public:
    int num;

    void setValue(int val) {
        num = val;
    }

    MATH operator + (MATH obj) {
        MATH temp;
        temp.num = num + obj.num;
        return temp;
    }

    void getValue() {
        cout << num << endl;
    }
};

int main() {
    MATH m1, m2, m3;
    m1.setValue(10);
    m2.setValue(20);
    m3 = m1 + m2;  // using overloaded + operator
    m3.getValue(); // should output 30
    return 0;
}
