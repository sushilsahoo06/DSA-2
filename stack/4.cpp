#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Declare the map
    unordered_map<int, int> arr;

    // 1. Inserting or updating values
    arr[1] = 3;  
    arr[3] = 4;
    arr[4] = -1;

    // 2. Accessing a value by its key
    cout << "The value for key 1 is: " << arr[1] << "\n"; 
    // Output: The value for key 1 is: 3

    // 3. Checking if a key exists in the map
    if (arr.find(4) != arr.end()) {
        cout << "Key 4 exists in the map!\n";
    }

    // 4. Iterating through all key-value pairs
    for (auto const& pair : arr) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << "\n";
    }

    return 0;
}