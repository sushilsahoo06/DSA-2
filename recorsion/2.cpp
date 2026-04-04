#include<bits/stdc++.h>
using namespace std;
// void f(int i ,int n){
//   if(i>n){//If our counter exceeds the limit, stop the recursion
//     return;
//   }
//   cout<<i<<"\n";
//   f(i+1,n);
// }

// int main(){
//   int n;
//   cin>>n;
//   f(1,n);
//   return 0;
// }

//4 3 2 1'
void f(int i ,int n){
  if(i>n){//If our counter exceeds the limit, stop the recursion
    return;
  }
  f(i+1,n);
  cout<<i<<"\n";
}

int main(){
  int n;
  cin>>n;
  f(1,n);
  return 0;
}