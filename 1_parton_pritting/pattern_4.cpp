#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<"*";//i---> 1 22 333 j-->1 12 123
      j++;
    }
    cout<<endl;
    i++;
  }
}