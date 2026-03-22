#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count=1;

  for(int i=1;i<=n;i++){
    int space=n-i;
    while(space>0){
      cout<<" ";
      space--;
    }
    for(int j=1;j<=i;j++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }
}