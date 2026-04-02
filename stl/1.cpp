#include<bits/stdc++.h>
using namespace std;

int main(){
  // pair<int ,int>p={1,3};
  // cout<<p.first<< " "<<p.second;

  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
   
  vector<pair<int ,int>> vec;
  vec.push_back({1,3});
  vec.emplace_back(1,2);
  for (auto const& p : vec) {
    cout << "{" << p.first << ", " << p.second << "} ";
  }
}