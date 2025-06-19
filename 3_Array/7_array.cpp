//given an array of marks of 10 students,if the mark of 
//any student is less than 35 print its roll no .

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of the students :";
  cin>>n;
  int mark[n];
  cout<<"Enter Mark of the students :";
  for(int i=0;i<n;i++){
    cin>>mark[i];
  }
  for(int i=0;i<n;i++){
    if(mark[i]<=35){
      int a=i+1;
      cout<<"Roll no :"<<a<<endl;
    }
  }

}