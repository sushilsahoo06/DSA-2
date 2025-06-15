#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int mult=1;
  int sum=0;
  while(n>0){
    int last_digit=n%10;
    mult=mult*last_digit;
    sum=sum+last_digit;
    n=n/10;
  }
  int result=mult-sum;
  cout<<result<<endl;
}