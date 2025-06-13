#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int j=1;
    while(j<=i){
      cout<<" ";
      j++;
    }
    int integer=n-i+1;
    while (integer>0)
    {
      cout<<i;
      integer--;
    }
    cout<<endl;
  }
  //////////////////////////////////////
  for(int i=1;i<=n;i++){
    int space=n-i;
    while(space>0){
      cout<<" ";
      space--;
    }
    int j=1;
    while(j<=i){
      cout<< i;
      j++;
    }
    cout<<endl;
  }

}