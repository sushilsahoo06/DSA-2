#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    if(i%2==0){
      cout<<i<<" ";
    }
  }
  cout<<endl;
  //table 3
  for(int j=n;j<=n*10;j=j+n){
    cout<<j<<" ";
  }
}