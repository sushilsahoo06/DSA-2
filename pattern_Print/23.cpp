#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    int space=n-i;
    while(space>0){
      cout<<" ";
      space--;
    }
    for(int j=1;j<=i;j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  for(int i=1;i<=n;i++){
    int space=i;
    while(space>0){
      cout<<" ";
      space--;
    }
    int o=n-i;
    for(int j=1;j<=o;j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}