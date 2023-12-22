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


// sum of all devisior of a number

ll SumofDivisor( ll n )
{
    ll sum = 1;
    int sqrtn = sqrt ( n );

    for (int i=2; i*i<=n; i++)
    {
        if ( n % i == 0 )
        {
            ll temp = 1;
            ll power = 1;
            while ( n % i == 0 )
            {
                n /= i;
                power *=i;
                temp += power;
            }
            sum *= temp;
        }
    }
    if ( n != 1 )
    {

        sum *= (n+1);
    }

    return sum;
}


int main()
{

ios::sync_with_stdio(false);
cin.tie(0);

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);





 ll n;

 int i;
 cin>>n;

 ll ans=SumofDivisor(n);

  cout<<ans<<nll;




}
