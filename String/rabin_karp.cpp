
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

 vector<int> rabin_karp(string  s, string  t)
  {

   int p=31;

   int n=s.size(),m=t.size(),i=0,j=0;

   vector<ll>power(max(n,m));

   power[0]=1;

   for(i=1; i<power.size(); i++)
    power[i]=(power[i-1]*p)%Mod;

     vector<ll> h(m+1, 0);

     for(i=0; i<m; i++)
     {
        h[i+1]=(h[i]+(t[i]-'a'+1)*power[i])%Mod;
     }

     ll hs = 0;
    for (i = 0; i < n; i++)
        hs = (hs + (s[i] - 'a' + 1) * power[i]) % Mod;

  vector<int>ans;
   for (int i = 0; i + n - 1 < m; i++)
   {
        ll cur_h = (h[i+n] - h[i]+Mod) % Mod;
        if (cur_h == hs * power[i] % Mod)
            ans.pb(i+1);
    }
    return ans;
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


string s,t;

cin>>s>>t;

vector<int>v;
v=rabin_karp(s,t);
for(auto x:v )
    cout<<x<<" ";




}
