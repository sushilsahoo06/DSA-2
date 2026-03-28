#include <iostream>
#include <climits>
using namespace std;

int getMax(int size, int num[]) {
    int maxVal = INT_MIN; 
    for(int i = 0; i < size; i++) { 
        if(num[i] > maxVal) {
            maxVal = num[i]; 
        }
    }
    return maxVal; 
}

int getMin(int size, int num[]) {
    int minVal = INT_MAX; 
    for(int i = 0; i < size; i++) {
        if(num[i] < minVal) {
            minVal = num[i]; 
        }
    }
    return minVal;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "The max value: " << getMax(size, num) << endl;
    cout << "The min value: " << getMin(size, num) << endl;

    return 0;
}