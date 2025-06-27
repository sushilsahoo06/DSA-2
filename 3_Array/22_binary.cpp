#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int k){
  int start=0;
  int end=n-1;
  // int mid=(start+end)/2;
  int mid=start+(end-start)/2;

  while(start<=end){
    if(arr[mid]==k){
      return mid;
    }
    if(k > arr[mid]){//right part
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return -1;
}
int main(){
  int even[6]={2,4,6,8,12,18};
  int index=binarySearch(even,6,12);

  cout<<"Index of 12 is "<<index<<endl;
  return 0;
}