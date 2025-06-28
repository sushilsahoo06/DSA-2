#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int getPivot(int arr[],int n){
  int s=0, e =n-1;
  int mid=s+(e-s)/2;

  while(s<e){
    if(arr[0]<arr[mid]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
  }
  return s;
}

int findpositions(int arr[],int n,int key){
  int pivot=getPivot(arr,n);
  if(key>=arr[pivot] && key<=arr[n-1]){
    return binarySearch(arr, pivot, n - 1, key);
  }else{
    return binarySearch(arr,0,pivot-1,key);
  }
}
int main(){
  int arr[5]={7,8,1,3,5};
  int key=5;
  int position=findpositions(arr,5,key);

  cout<<"Element found at index: " << position << endl;
}