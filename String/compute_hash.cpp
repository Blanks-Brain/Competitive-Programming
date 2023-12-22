#include<bits/stdc++.h>

#define ll long long int


#define dll long double

#define pb push_back

#define nll "\n"

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//ordered_set<int>s:
//s.find_by_order(k):Kth element in "s",
//s.order_of_key(k):Number of item strictly less than k

 ll compute_hash(string  s)
{
     int p=31;
  ll hash_value=0;
  ll p_pow=1;

  for(char c:s)
  {
     hash_value = (hash_value+(c-'a'+1)*p_pow)%Mod;
     p_pow=(p_pow*p)%Mod;
  }

 return hash_value;
}




int main()
{

ios::sync_with_stdio(false);
cin.tie(0);

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

    //cout<<"Case "<<in<<": "<<ans<<nll;


// int t;

//  cin>>t;

//  while(t--)
//  {



//  }

 string s;

 cin>>s;

 cout<<compute_hash(s)<<nll;




}


