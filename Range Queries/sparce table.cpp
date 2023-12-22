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

const int MAX_N = 1000005;
const int LOG=25;
int v[MAX_N][LOG];
int bin_log[MAX_N];


int query(int l ,int r)
{
    int len=r-l+1;

    int k=bin_log[len];

    return min(v[l][k],v[r-(1<<k)+1][k]);
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

 int n,i,j,q;

 cin>>n>>q;

int a[n];
 for(i=0; i<n; i++)
 {
    cin>>a[i];
    v[i][0]=a[i];
 }

 for(i=1; i<25; i++)
 {
    for(j=0;  j+(1<<i)-1<n; j++)
    {
        v[j][i]=min(v[j][i-1],v[j+(1<<(i-1))][i-1]);
    }
 }

 bin_log[1]=0;

 for(i=2; i<=n; i++)
 {
    bin_log[i]=1+bin_log[i/2];

 }

while(q--)
{
    int l,r;

    cin>>l>>r;

    l--;
    r--;

    cout<<query(l,r)<<nll;
}

}
