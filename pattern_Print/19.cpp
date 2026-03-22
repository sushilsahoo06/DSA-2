#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    int space=i-1;
    while(space>0){
      cout<<" ";
      space--;
    }
    int s=n-i+1;
    for(int j=1;j<=s;j++){
      cout<<j;
    }
    cout<<endl;
  }
}