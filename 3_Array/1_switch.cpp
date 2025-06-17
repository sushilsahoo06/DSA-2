#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter value of a :";
  cin>>a;

  int b;
  cout<<"Enter value of b :";
  cin>>b;

  char op;
  cout<<"Enter the operator :";
  cin>>op;

  switch(op){
    case '+':cout<<"adition :"<<a+b;
    break;
    case '-':cout<<"substrations :"<<a-b;
    break;
    case '*':cout<<"Multipication :"<<a*b;
    break;
    case '%':
      if(b==0 || a==0){
        cout<<"Error : Modulus by zero is not allowed!"<<endl;
        exit(1);
      }
    cout << "Modulus: " << a % b;  
    break;

    case '/':
      if(b==0 || a==0){
        cout<<"Error : Division by zero is not allowed!"<<endl;
        exit(1);
      }
    cout<<"Divisions :"<<a/b;
    break;
    default:cout<<"Invalid operators ";
    
  }
}