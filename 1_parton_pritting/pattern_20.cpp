#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=n;i>=1;i--){
    cout<<"*";
    int space=n-i;
    while(space){
      cout<<" ";
    }
    cout<<endl;
  }
}