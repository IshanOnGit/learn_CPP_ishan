#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter() {
        value = 0;
    }

    // Overload prefix ++ operator (no pointer or reference)
    Counter operator++() {
        Counter temp;
        temp.value = value + 1;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    // Helper to assign new object (so value updates)
    void setValue(int v) {
        value = v;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Counter c;
    c.display(); // Value: 0

    c = ++c;     // Calls overloaded ++
    c.display(); // Value: 1

    c = ++c;
    c.display(); // Value: 2

    return 0;
}
