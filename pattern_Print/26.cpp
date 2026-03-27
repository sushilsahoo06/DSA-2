#include<iostream>
using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
    
//     for(int j=i;j<=n;j++){
//       char ch ='A'-1+j;
//       cout<<ch;
//     }
//     cout<<endl;

//   }
// }

// int main(){
//   int n;
//   cin>>n;

//   for(int i=1;i<=n;i++){
//     char ch='A'+n-i;
//     for(int j=1;j<=n-i+1;j++){
//       cout<<ch;
//     }
//     cout<<endl;
//   }
// }

// int main(){
//   int n;
//   cin>>n;

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       char ch='A'+j-1;
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
// }

int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=i;j>=1;j--){
      char ch='A'+n-j;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}