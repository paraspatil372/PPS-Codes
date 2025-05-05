#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;
    float si = (principal * rate * time) / 100;
    cout << "Simple Interest: " << si << endl;
    return 0;
}
