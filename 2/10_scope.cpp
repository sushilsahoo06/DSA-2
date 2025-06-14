#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a=3;
  cout<<a<<endl;//one block
  if(true){
    int a=5;
    cout<<a<<endl;//onather block & this 'a' do't acces in outer of this statemwnt
  }
  return 0;
}
