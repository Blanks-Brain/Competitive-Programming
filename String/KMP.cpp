
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


 vector<int>CreateLpsArray(string pattern)
 {
    int sz=pattern.size();
    vector<int>lps(sz,0);

    int i=0,j;

    for(j=1; j<sz;)
    {
        if(pattern[i]==pattern[j])
        {
            lps[j]=i+1;

            i++;j++;
        }

        else
        {
            if(i==0)
            {
                lps[j]=0;
                j++;
            }

            else
             i=lps[i-1];
        }
    }

  return lps;

 }

bool kmp(string s,string pattern)
{
     vector<int>lps=CreateLpsArray(pattern);

    bool exist=false;


   int  i=0,j=0;
    int sz=s.size();

     while(i<sz)
     {
        if(s[i]==pattern[j])
        {
            i++;
            j++;
        }

        else
        {
            if(j!=0)
                j=lps[j-1];

            else
                i++;
        }

        if(j==pattern.size())
        {
            exist=true;
            break;
        }
     }

     return exist;
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


string s,pattern;


 cin>>s>>pattern;

 if(kmp(s,pattern))
    cout<<"found"<<nll;

 else
    cout<<"Not found"<<nll;


}
