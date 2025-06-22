#include<iostream>
using namespace std;

void duplicate(int n,int arr[]){
  int ans=0;
  //XOR all the elememts
  for(int i=0;i<n;i++){
    ans=ans^arr[i];
  }
  // XOR [1,n-1]
  for(int i=0;i<n;i++){
    ans=ans^i;
  }
  cout<<"Duplicate value :"<<ans;

}

int main(){
  int n;
  cout<<"Enter the size of array :";
  cin>>n;

  int arr[n];
  cout<<"Enter the value of array :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  duplicate(n,arr);
}