#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;

  for(int i=1;i<=n;i++){
    int space=n-i;
    while(space>0){
      cout<<" ";
      space--;
    }
    //print frist trangle
    int j=1;
    while(j<=i){
      cout<<j;
      j++;
    }
    //second trangle
    int start=i-1;
    while(start>0){
      cout<<start;
      start--;
    }

    cout<<endl;
  }
  
}