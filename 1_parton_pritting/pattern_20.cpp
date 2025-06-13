#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int star=n-i+1;
    while(star){
      cout<<"*";
    }
    int j=1;
    int space=i-1;
    while(j<=i){
      cout<<" ";
      j++;
    }
  }
    cout<<endl;
}