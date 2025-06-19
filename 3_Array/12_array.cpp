#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
  for(int i=0;i < size ;i++){
    if(key==arr[i]){
      return 1;
    }
  }
  return 0;
}
int main(){
  int arr[10]={5 , 7 ,3 ,9,12,-4,6,9,4,-6};
  
  cout<<"Enter the element to search for"<<endl;
  int key;
  cin>>key;
  bool found=(arr,10,key);
  if(found){
    cout<<"key is present"<<endl;
  }
  else{
    cout<<"Key is absent"<<endl;
  }
}