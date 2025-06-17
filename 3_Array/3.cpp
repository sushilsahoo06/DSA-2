#include<iostream>
using namespace std;

int main() {
  int amount;
  cout << "Enter amount: ";
  cin >> amount;

  int note;
  int step = 1; // force switch to start from case 1

  switch(step) {
    case 1:
      note = amount / 100;
      cout << "Total 100 notes: " << note << endl;
      amount = amount % 100;

    case 2:
      note = amount / 50;
      cout << "Total 50 notes: " << note << endl;
      amount = amount % 50;

    case 3:
      note = amount / 20;
      cout << "Total 20 notes: " << note << endl;
      amount = amount % 20;

    case 4:
      note = amount / 10;
      cout << "Total 10 notes: " << note << endl;
      amount = amount % 10;

    case 5:
      note = amount / 5;
      cout << "Total 5 notes: " << note << endl;
      amount = amount % 5;

    case 6:
      note = amount / 1;
      cout << "Total 1 notes: " << note << endl;
      amount = amount % 1;
      break;

    default:
      cout << "Invalid step!" << endl;
  }

  return 0;
}
