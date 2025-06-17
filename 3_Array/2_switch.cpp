#include<iostream>
using namespace std;

int main(){
  int amount;
  cout<<" enter amount Number :";
  cin>>amount;

  int note=0;
  int num=1;
  switch(num){
    case 1:
    note=amount/100;
    cout<<"Toatal 100 notes are "<<note<<endl;
    amount=amount%100;
    
    case 2:
    note=amount/50;
     cout<<"Toatal 50 notes are "<<note<<endl;
    amount=amount%50;
   
    case 3:
    note=amount/20;
    cout<<"Toatal 20 notes are "<<note<<endl;
    amount=amount%20;
    
    case 4:
    note=amount/10;
     cout<<"Toatal 10 notes are "<<note<<endl;
    amount=amount%10;
   
    case 5:
    note=amount/5;
    cout<<"Toatal 5 notes are "<<note<<endl;
    amount=amount%5;
    
    case 6:
    note=amount/1;
    cout<<"Toatal 1 notes are "<<note<<endl;
    amount=amount%1;
    break;

    default:
    cout<<"Enter only integer value"<<endl;
  }
}