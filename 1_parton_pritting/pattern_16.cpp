#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;

  for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      char ch='A'+n-i-j+1;
      cout<<ch;
    }
    cout<<endl;
  }
}