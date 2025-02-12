#include <iostream>
using namespace std;

int main() {
    int intVar = 42;
    float floatVar = intVar; // Implicit typecasting (int to float)
    
    cout << "intVar: " << intVar << endl;
    cout << "floatVar: " << floatVar << endl;

    return 0;
}