#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool found = false;

    for (int i = 0; i <= 30; i++) {
        int ans = pow(2, i);
        if (ans == n) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
