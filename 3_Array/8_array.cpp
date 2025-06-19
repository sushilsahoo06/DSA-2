//calculate the sum of all elements in the given array.
#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter the size of array :";
   cin>>n;

   int arr[n];
  cout<<"enter the value of the elements :";
   for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"The sum of all elements :";
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  cout<<sum;

}