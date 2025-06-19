//given an array of integers ,change the value of all odd
//index elements to its second multiple and increament aii even index value by 10
#include<iostream>
using namespace std;

void odd_even_integers(int n,int arr[]){
  for(int i=0;i<n;i++){
      
    if(i % 2 != 0){
      arr[i]*=2;
    }
    else{
      arr[i]+=10;
    }
    cout<<arr[i]<<" ";
  }
  
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
  cout<<"the new array :";
  odd_even_integers(n,arr);
  return 0;
}