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


    for(int i=0;i<n;i++){
      int element=arr[i];
      for(int j=0;j<k;j++){
      if(element< brr[j]){
        break;
      }
        if(element==brr[j]){
          cout<<element<<" ";
        }
      }
    }    
    return 0;
}