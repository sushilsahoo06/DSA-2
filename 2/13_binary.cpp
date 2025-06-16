#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Store as unsigned char to keep only the last 8 bits
    unsigned char val = num;

    cout << "8-bit binary of " << num << " is: ";
    for (int i = 7; i >= 0; i--) {
        cout << ((val >> i) & 1);
    }
    cout << endl;

    return 0;
}
