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
    int star=n-i+1;
    while(star>0){
      cout<<"*";
      star--;
    }
    cout<<endl;
  }
    
}