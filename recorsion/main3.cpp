#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input2.txt", "r", stdin);
  freopen("output2.txt", "w", stdout);
#endif
  int n;
  cin>>n;
  int arr[n];
    map<int ,int>s;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    s[arr[i]]++;
  }


  // for(int i=0;i<n;i++){
  //   s[arr[i]]++;
  // }
  int q;
  cin>>q;
  while (q--)
  {
    int number;
    cin>>number;
    cout<<s[number]<<endl;
  }
  
  return 0;
}