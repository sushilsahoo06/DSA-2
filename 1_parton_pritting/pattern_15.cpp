#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;

  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     char ch='A'+i+j-2;
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+i+j-2;
      cout<<ch;
      j++;
    }
    cout<<endl;
    i++;
  }
}