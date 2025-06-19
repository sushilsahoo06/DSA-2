#include<iostream>
using namespace std;

void print_array(int even[],int n){
  for(int i=0;i<n;i++){
    cout<<even[i]<<" ";
  }
}

void swapAlternate(int arr[],int n){
  for(int i=0;i<n;i+=2){
    // if(i+1 < n){
    //   swap(arr[i],arr[i+1]);
      
    // }
    int temp;
    if(i+1 < n){
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }

  }
}
int main(){
  int even[8]={5,9,4,6,8,7,9,2};
  swapAlternate(even,8);
  print_array(even,8);
}