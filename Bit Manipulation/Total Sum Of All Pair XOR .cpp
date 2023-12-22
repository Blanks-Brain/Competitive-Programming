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


 int n,i,j,c=0,d=0,ans=0;

 cin>>n;

  int a[n];

  for(i=0; i<n; i++)
    cin>>a[i];


  for(i=0; i<31; i++)
  {
     c=0,d=0;
     for(j=0; j<n; j++)
     {
        if(a[j]&(1<<i))
          c++;
        else
          d++;
     }
    int l=c*d;

     ans+=l*(1<<i);
  }

  cout<<ans<<nl;




}
