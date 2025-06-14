#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;
  for(int i=1;i<=n;i++){
    int start=n-i+1;
    int j=1;
    while(j<=start){
      cout<<j;
      j++;
    }
    //print star
    int star=2*(i-1);
    while(star){
      cout<<"*";
      star--;
    }

    //print tangle 3
    int num=n-i+1;
    
    while(num>0){
      cout<<num;
      num--;
    }


    cout<<endl;
  }
}