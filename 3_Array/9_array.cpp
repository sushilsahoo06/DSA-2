#include<iostream>
#include<limits.h>
using namespace std;

int maximum(int n,int arr[]){
  int max=INT_MIN;// Step 1: Initialize to the smallest possible integer
  for(int i=0;i<n;i++){
    if(max < arr[i]){// Step 2: Compare each element
      max=arr[i];// Step 3: Update max if current element is greater
    }
  }
  return max;
}

int main(){
  int n;
  cout<<"Enter the size of array :";
  cin>>n;

  int arr[n];
  cout<<"enter the value of the elements :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maximum_value=maximum(n,arr);
  cout<<"The maximum elements is "<<maximum_value;
  return 0; 
}