#include<iostream>
using namespace std;

void revere(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  while(s < e) {
    int temp= arr[s];
    arr[s]=arr[e];
    arr[e]=arr[temp];
    s++;
    e--;
  }
}

void printArray(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[5] = {3, 4, 6, 2, 1};
  int brr[6] = {2, 6, 7, 3, 4, 9};

  revere(arr, 5);
  revere(brr, 6);

  printArray(arr, 5);
  printArray(brr, 6);
  return 0;
}