#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number :";
  cin>>n;
  // for (int i=1;i<=n;i++){
  //   int j=1;
  //   while(j<=i){

  //   }
  // }
  for (int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}