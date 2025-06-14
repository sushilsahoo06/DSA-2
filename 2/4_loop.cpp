#include<iostream>
using namespace std;
int main(){
  //decreasing order
  // for(int i=100;i>0;i=i-3){
  //   cout<<i<<" ";
  // }

  ////////////////////////////////prime number
  int n;
  cin>>n;
  int a=0;
  for(int i=2;i<=n-1;i++){
    if(n%i==0){
      a=1;
      break;
    }
  }
  if(a==0) {
    cout<<"the given no is prime"<<endl;
  }
  else {
    cout<<" the given no is composite";
  }
}