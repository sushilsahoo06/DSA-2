#include <bits/stdc++.h>
using namespace std;

int fn(int arr[],int low,int high){
  int pivot=arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i]<=pivot && i<=high-1){
      i++;
    }
    while(arr[j]>pivot && j>=low+1){
      j--;
    }
    if(i<j)swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;
}
void qs(int arr[],int low,int high){
  if(low<high){
    int portions=fn(arr,low,high);
    qs(arr,low,portions-1);
    qs(arr,portions+1,high);
  }
}
void quick_sort(int arr[],int n){
  qs(arr,0,n);
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];

  quick_sort(arr,n);
  for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}