#include<iostream>
using namespace std;
//stair case
int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    int k=(i%2 != 0) ? i+1 : i;

    for(int j=1;j<=k;j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}