//Input: n = 5
//Output: 2
//Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<" Enter a number :";
  cin>>n;
  int m=n;
  if(m==0) {
    cout<<"1";
  }

  int mask=0;
  while(m!=0){
    mask=(mask<<1)|1;
    m=m>>1;
  }
  int ans=(~n) & mask;
  cout<<ans;
}