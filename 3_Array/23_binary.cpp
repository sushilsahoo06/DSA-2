#include<iostream>
using namespace std;

int fristOccurance(int arr[],int n,int k){
  int s=0,e=n-1;
  int mid=s+(e-s)/2;

  int ans=-1;
  
  while(s<=e){
    if(arr[mid]==k){
      ans=mid;
      e=mid-1;//use for left most occurance
    }
    if(k>arr[mid]){
      s=mid+1;
    }
    else{//k<arr[mid]
      e=mid-1;
    }
    
    mid=s+(e-s)/2;
  }
  return ans;//frist occurance
}

int lasttOccurance(int arr[],int n,int k){
  int s=0,e=n-1;
  int mid=s+(e-s)/2;

  int ans=-1;

  while(s<=e){
    if(arr[mid]==k){
      ans=mid;
      s=mid+1;//use for right most occurance
    }
    else if(k>arr[mid]){
      s=mid+1;
    }
    else{//k<arr[mid]
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;//frist occurance
}


int main(){
  int even[6]={2,4,4,4,12,18};
  int index=fristOccurance(even,6,4);
  int index_2=lasttOccurance(even,6,4);
  int occuarance=(index_2-index)+1;//(last index - frist index)+1
  cout<<"Frist and second occurance of 4 is at index "<<index<<" "<<index_2<<endl;
  cout<<"Total occurance :"<<occuarance<<endl;
  
  return 0;
}