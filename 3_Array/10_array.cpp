//find minimum number
#include<iostream>
#include<limits.h>
using namespace std;

int minimum(int n,int arr[]){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(min > arr[i]){
      min=arr[i];
    }
  }
  return min;
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
  int minimum_value=minimum(n,arr);
  cout<<"The minimum elements is "<<minimum_value;
  return 0; 
}