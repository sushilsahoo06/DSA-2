#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value :";
  cin>>n;
  int i=1;
  int count=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      // cout<<j;
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
}