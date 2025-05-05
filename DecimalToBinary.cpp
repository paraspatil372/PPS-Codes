#include <iostream>
using namespace std;

int main() {
    int num, binary = 0, place = 1;
    cout << "Enter a decimal number: ";
    cin >> num;
    int temp = num;
    while (temp > 0) {
        binary += (temp % 2) * place;
        temp /= 2;
        place *= 10;
    }
    cout << "Binary equivalent of " << num << " is: " << binary << endl;
    return 0;
}
