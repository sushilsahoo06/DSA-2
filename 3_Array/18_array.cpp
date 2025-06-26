#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array :";
  cin>>n;

  int arr[n];
  cout<<"Enter the value of array :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int s;
  cout<<"Enter the value of 'S' that sum of the two element of the array :";
  cin>>s;
 
  bool found=false;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==s){
        cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << s << endl;
        found=true;
      }
    }  
  }
  if(!found){
    cout << "No pair found with sum " << s << endl;
  }
}