#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter a binary no : ";
  cin>>n;

  int ans=0;
  int i=0;
  while(n!=0){
    int digits=n%10;//n%10
    ans=digits*pow(2,i)+ans;
    n=n/10;
    i++;
  }
  cout<<"Answer :"<<ans;
  

}