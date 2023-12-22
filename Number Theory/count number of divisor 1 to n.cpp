
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

vector <int>cntdivisors(1000006,0);

void countDivisors(int n)
{
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            cntdivisors[j]++;
        }
    }
}

int main()
{

ios::sync_with_stdio(false);
cin.tie(0);

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);




// int t;

//  cin>>t;

//  while(t--)
//  {



//  }

int n,i,j;

cin>>n;

 countDivisors(n);


 for(i=0; i<=n; i++)
 {

    cout<<i<<" "<<cntdivisors[i]<<nll;
 }



}
