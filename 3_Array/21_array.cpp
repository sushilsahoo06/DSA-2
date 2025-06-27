#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void sortOneArray(int arr[],int n){
  int left=0 , right=n-1;
  // int step=0;

  while(left < right){

    // cout<<"step"<<step++<<endl;
    // printArray(arr,n);
    while(arr[left]==0){
      left++;
    }

    while(arr[right]==1){
      right--;
    }
    
      swap(arr[left],arr[right]);
      left++;
      right--;
    
  }
  // cout<<"return"<<endl;
  // printArray(arr,n);
}
int main(){
  int arr[9]={1,1,0,0,1,0,1,0,0};

  sortOneArray(arr,9);
  // cout<<"printig after function call"<<endl;
  printArray(arr,9);

  return 0;
}