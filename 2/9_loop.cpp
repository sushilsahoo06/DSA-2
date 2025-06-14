#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 0, b = 1;
  int next_term = 0;

  cout << "Fibonacci Series: " << a << " " << b << " ";

  for(int i = 1; i <= n - 2; i++) { // already printed 2 terms
    next_term = a + b;
    cout << next_term << " ";
    a = b;
    b = next_term;
  }

  return 0;
}
