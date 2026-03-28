#include<iostream>
using namespace std;

int main() {
    // The array has 7 elements
    int arr[7] = {1, 2, 3, 2, 3, 1, 4};
    int ans = 0; 
    for(int i = 0; i < 7; i++) {
        ans = ans ^ arr[i];
    }

    cout << "The unique element is: " << ans << endl;

    return 0;
}