#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            // Throw an exception if b is zero
            throw "Division by zero is not allowed!";
        }

        float result = (float)a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        // Catch the exception and print the message
        cout << "Error: " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
