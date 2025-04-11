#include<iostream>
using namespace std;

// Adding two integers (Function definition 1)
int addition(int a, int b) {
   return a + b;
}

// Adding three integers (Function definition 2)
int addition(int a, int b, int c) {
   return a + b + c;
}

// Adding two floating-point numbers (Function definition 3)
float addition(float a, float b) {
   return a + b;
}

int main() {
   cout<<addition(10.5f, 20.3f)<<endl;
   cout<<addition(10, 20, 30)<<endl;
   cout<<addition(10, 20)<<endl;

   return 0;
}