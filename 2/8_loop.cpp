#include<iostream>
#include<limits.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  int isNegative=(n<0)?-1:1;//store -ve
  n=abs(n);

  long long rev=0;
  while(n!=0){
    int last_digits=n%10;
    rev=rev*10+last_digits;
    n=n/10;
    if(rev>INT_MAX || rev<INT_MIN){
      cout<<"0";
    }
  }
  cout<<rev*isNegative;
}
///reverse number