#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: A = " << a << ", B = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: A = " << a << ", B = " << b << endl;
    return 0;
}
