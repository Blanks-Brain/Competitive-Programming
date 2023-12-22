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


vector<int> z_algo(string s)
 {

    int len=s.size();
    int l=0,r=0,i;
    vector<int>z(len,0);

    for(i=0; i<len; i++)
    {
        if(i>r)
        {
            l=r=i;

            while(r<len and s[r]==s[r-l])
                r++;

            z[i]=r-l;

            r--;
        }

        else
        {
            int idx=i-l;

            if(i+z[idx]<=r)
                z[i]=z[idx];

            else
            {
                l=i;

                while(r<len and s[r]==s[r-l])
                    r++;

                z[i]=r-l;

                r--;
            }
        }
    }

    return z;
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


vector<int>z;

cin>>s;
z=z_algo(s);

for(auto x:z)
 cout<<x<<" ";

cout<<nll;




}
