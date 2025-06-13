#include <iostream>
#include <iomanip>   // optional, only needed if you later decide to use setw
using namespace std;

int main() {
    int n;
    cin >> n;

    /* ---------- 1) Left‑slanted inverted triangle (each row = i) ---------- */
    for (int i = 1; i <= n; ++i) {
        /* leading blanks: two spaces for every missing element so rows line up */
        for (int s = 1; s <= i; ++s) cout << "  ";

        /* print the digit i   (n‑i+1) times, each followed by a space        */
        for (int k = 1; k <= n - i + 1; ++k) cout << i << ' ';
        cout << '\n';
    }

    /* ---------- 2) Right‑slanted ordinary triangle (each row = i) ---------- */
    for (int i = 1; i <= n; ++i) {
        /* leading blanks:  two spaces per missing element */
        for (int s = 1; s <= n - i; ++s) cout << "  ";

        /* print the digit i   (i) times */
        for (int k = 1; k <= i; ++k) cout << i << ' ';
        cout << '\n';
    }

    /* ---------- 3) Right‑aligned triangle of running integers -------------- */
    int count = 1;
    for (int i = 1; i <= n; ++i) {
        /* leading blanks:  two spaces per missing element */
        for (int s = 1; s <= n - i; ++s) cout << "  ";

        /* print an ascending sequence, i numbers on this row */
        for (int k = 1; k <= i; ++k) cout << count++ << ' ';
        cout << '\n';
    }
}
