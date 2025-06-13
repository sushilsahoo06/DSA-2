#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    //space print 
    int space =n-i;
    while(space){
      cout<<" ";
      space=space-1;
    }
    int j=1;
    while (j<=i){
      cout<<"*";
      j++;
    }
    cout<<endl;
  }
}