#include<iostream>
using namespace std;

int mountainarray(int arr[],int n){
  int start=0,end=n-1;
  int mid=start+(end-start)/2;

  while(start< end){
    if(arr[mid]> arr[mid+1]){
      end=mid;
      
    }
    else{
      start=mid+1;
    }
    mid=start+(end-start)/2;
  }
  
  return start;
}

int main(){
  int arr[5]={0 , 10, 7, 5 , 2};

  int index= mountainarray(arr,5);
  cout<<"The peak index of mountain array :"<< index<< endl;
  return 0;
}