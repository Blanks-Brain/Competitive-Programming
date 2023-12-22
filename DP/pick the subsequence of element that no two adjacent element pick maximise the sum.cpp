
#include<bits/stdc++.h>

#define ll long long int

#define pb push_back

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int a[1000000];
int dp[1000000];

int n;
int cnt=0;
int solve(int i)
   {
     cnt++;

     if(i<0)
      return 0;

    if(dp[i]!=INT_MIN)
      return dp[i];

    return dp[i]=max(a[i]+solve(i-2),solve(i-1));


   }


int main()
{
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);


// int t;

//  cin>>t;

//  while(t--)
//  {


//  }

 int i;


 cin>>n;

 for(i=0; i<n; i++)
 {
  cin>>a[i];
  dp[i]=INT_MIN;
 }
 cout<<solve(n-1)<<endl;
// cout<<cnt<<endl;




}
