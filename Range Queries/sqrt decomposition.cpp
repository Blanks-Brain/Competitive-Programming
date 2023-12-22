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


 int n,i,j,c=0;

 cin>>n;

 vector<int>a(n);

 int len=sqrt(n)+1;

 vector<int>v(len);

  for(i=0; i<n; i++)
  {
    cin>>a[i];

    v[i/len]+=a[i];

  }

 // for(auto x:v)
 //    cout<<x<<" ";

 int q;

 cin>>q;

 while(q--)
 {
    int l,r;

    cin>>l>>r;

    // int sum=0;

    // l--;
    // r--;

    // for(i=l; i<=r;)
    // {
    //      if(i%len==0 && i+len-1<=r)
    //      {
    //         sum+=v[i/len];
    //         i+=len;
    //      }

    //      else
    //      {
    //        sum+=a[i];
    //        i++;
    //      }

    // }

    int sum = 0;
    l--,r--;
   int c_l = l / len,   c_r = r / len;
   if (c_l == c_r)
    for (i=l; i<=r; i++)
        sum += a[i];


  else
 {
    for (i=l, end=(c_l+1)*len-1; i<=end; ++i)
        sum += a[i];

    for (i=c_l+1; i<=c_r-1; ++i)
        sum += v[i];

    for (i=c_r*len; i<=r; ++i)
        sum += a[i];
   }
    cout<<sum<<nll;
 }



}
