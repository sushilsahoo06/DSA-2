#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    if(i%2!=0){
      cout<<i<<" ";
    }
  }
  cout<<endl;
  //using continue method
  for(int i=0;i<=n;i++){
    if(i%2==0){
      continue;
    }
    cout<<i<<" ";
  }
}