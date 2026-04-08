#include <bits/stdc++.h>
using namespace std;

void sorting_s(int arr[],int n){
  for(int i=0;i<=n-2;i++){
    int min=i;
    for(int j=i;j<=n-1;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
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

  sorting_s(arr,n);
  for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}