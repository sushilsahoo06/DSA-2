#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input2.txt", "r", stdin);
  freopen("output2.txt", "w", stdout);
#endif
  string s;
  cin>>s;

  // int hash[26]={0};//hash[256]={0}
  // for(int i=0;i<s.size();i++){
  //   hash[s[i]-'a']++;//hash[s[i]]
  // }
  map<char,int>map;
  for(int i=0;i<s.size();i++){
    map[s[i]]++;
  }
  for(auto it:map){
    cout<<it.first<<"-->"<<it.second<<endl;
  }
  int q;
  cin>>q;
  while (q--)
  {
    char r;
    cin>>r;
    // cout<<hash[r-'a']<<endl;//cout<<hash[r]<<endl;
    cout<<map[r]<<endl;
  }
  return 0;
}