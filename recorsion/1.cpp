#include<bits/stdc++.h>
using namespace std;
// void f(){
//   cout<< 1 << " ";
//   f();
// }

// int main(){
//   f();
//   return 0;
// }


// void f(int count) {
//     if (count > 10) return;
//     cout << count << " ";
//     f(count + 1);
// }

// int main() {
//     int count = 0;
//     f(count);
//     return 0;
// }

//print name 5 times
void f(int i,int n){
  if(i>n){
    return;
  }
  cout<<"sushil"<<"\n";
  f(i+1,n);
}
int main(){
  int n;
  cin>>n;
  f(1,n);
  return 0;
}
