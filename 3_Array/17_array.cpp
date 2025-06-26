#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the size of second array: ";
    cin >> k;

    int brr[k];
    cout << "Enter the values of second array: ";
    for (int j = 0; j < k; j++) {
        cin >> brr[j];
    }

    int i = 0, j = 0;

    cout << "Common elements: ";
    while (i < n && j < k) {
        if (arr[i] < brr[j]) {
            i++;
        }
        else if (arr[i] > brr[j]) {
            j++;
        }
        else {
            cout << arr[i] << " "; 
            i++;
            j++;
        }
    }

    return 0;
}
