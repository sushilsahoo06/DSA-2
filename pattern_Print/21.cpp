#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=0;i<=n;i++){
    int space=n-i;
    while(space>0){
      cout<<" ";
      space--;
    }
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    int nxt=i-1;
    while(nxt>0){
      cout<<nxt;
      nxt--;
    }
    cout<<endl;
  }
}