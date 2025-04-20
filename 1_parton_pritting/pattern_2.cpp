#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=i;//j start from 1 2 3 4
    while(j<=n){
      cout<<i;//j-->1 2 3 4
      j++;
    }
    cout<<endl;
    i++;
  }
}