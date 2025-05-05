#include <iostream>
using namespace std;

int main() {
    int a, b, gcd, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int tempA = a, tempB = b;
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    gcd = tempA;
    lcm = (a * b) / gcd;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}
