
#include<bits/stdc++.h>

#define ll long long int

#define pb push_back

#define dor for

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


//ll t[104][10004];




int main()
{
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

 //for()

//    f

// int t;

//  cin>>t;

//  while(t--)
//  {


 int i,j,m=0,n=0,c;

    string a,b;

    cin>>a>>b;

    n=a.size();
    m=b.size();

    int t[n+1][m+1];





    for(i=0; i<=n; i++)
    {
        t[i][0]=0;

    }


    for(i=0; i<=m; i++)
    {
        t[0][i]=0;

    }


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
                t[i][j]=1+t[i-1][j-1];

            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }

    //    for(i=0; i<=n; i++)
    // {
    //     for(j=0; j<=m; j++)
    //     {

    //        cout<<t[i][j]<<" ";
    //     }
    //      cout<<endl;
    // }

   //cout<<(n+m)-t[n][m]<<endl;
 n=min(n,m);
  if(t[n][m]==n)
    cout<<"YES\n";

  else
    cout<<"NO"<<endl;

}
