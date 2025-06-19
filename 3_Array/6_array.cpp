//reverse array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if(n<0){
      cout<<"size must be positive. \n";
    }
    int arr[n];
    cout<<"Enter "<<n<<" Integers :";
    for(int i=0; i<n; ++i){
      cin>>arr[i];
    }
    cout<<"the reverse array : ";
    for(int j=n-1;j>=0;--j){
      cout<<arr[j]<<' ';
    }
    cout<<'\n';
}
