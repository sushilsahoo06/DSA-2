#include<iostream>
using namespace std;

int factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;
}

int the_ncr(int n,int r){
  int num=factorial(n);
  int denom=factorial(r)*factorial(n-r);
  int answer=num/denom;
  return answer;
}

int main(){
  int n;
  cout<<"Enter the value of n :";
  cin>>n;

  int r;
  cout<<"Enter the value of r :";
  cin>>r;
  
  if(r>n){
    cout<<"r should be less than n";
    return 0;
  }
  int answer=the_ncr(n,r);
  cout<<"the final answer :"<<answer;
  return 0;
}