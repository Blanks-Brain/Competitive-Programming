
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

int n,m;

int grid[1000][1000];

int dp[1000][1000];

int solve(int i, int j)
{
   if(i>=n || j>=m)
    return INT_MAX;

   if(i==n-1 && j==m-1)
    return grid[n-1][m-1];

  if(dp[i][j]!=-1)
    return dp[i][j];

   return  dp[i][j]=grid[i][j]+min( solve(i+1,j), solve(i,j+1) );
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


 int i,j;

 cin>>n>>m;

 for(i=0; i<n; i++)
 {
   for(j=0; j<m; j++)
   {
    cin>>grid[i][j];
   }
 }

 memset(dp,-1,sizeof(dp));


 cout<<solve(0,0)<<endl;

}
