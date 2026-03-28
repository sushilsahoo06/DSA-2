#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void swap(int arr[],int n){
  for(int i=0;i<n;i+=2){
    if(i+1 < n){
      swap(arr[i],arr[i+1]);
    }
  }
}

int main(){
  int arr[8]={1,2,3,4,5,6,7,8};
  int brr[5]={1,5,6,7,8};

  swap(arr,8);
  swap(brr,5);
  printArray(arr,8);
  printArray(brr,5);

}