#include<bits/stdc++.h>

#define ll long long int

#define pb push_back

#define nl "\n"

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);


// int t;

//  cin>>t;

//  while(t--)
//  {


//  }
  int c,p,s;
  cin>>c>>p>>s;

  map<string,int>score;
  map<string,int>ans;
  vector<string>v;
  string s2,s3,s4;
  for(int i = 0; i < c; i++){
  cin>>s2;
  v.push_back(s2);
  }
  int a;
  for(int i = 0; i < p; i++){
  cin>>s2>>a;
  score[s2] = a;
  }
  for(int i = 0; i < s; i++){
  cin>>s2>>s3>>s4;
  if(s4 !="WA"){
  ans[s2] += score[s2];
  }
  }
  for(int i = 0 ; i < c; i++){
  cout<<ans[v[i]]<<'\n';
  }
}
