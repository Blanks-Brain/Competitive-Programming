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


#define mxsize 100000006

int marked[mxsize/64 + 2];
vector<ll>primes;

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

bool isPrime(int num)
{
    return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}

void sieve(int n)
{
    for (int i = 3; i * i < n; i += 2)
    {
        if (!on(i))
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                mark(j);
            }
        }
    }
    primes.pb(2);
    for(int i=3;i<n;i+=2)
    {
        if(isPrime(i))
            primes.pb(i);
    }
}


ll SumofDivisor( ll n )
{
    ll sum = 1;
    int sqrtn = sqrt ( n );
    ll size = primes.size();
    for ( int i = 0; i < size && primes[i] <= sqrtn; i++ )
    {
        if ( n % primes[i] == 0 )
        {
            ll temp = 1;
            ll power = 1;
            while ( n % primes[i] == 0 )
            {
                n /= primes[i];
                //factors.push_back(primes[i]);
                power *= primes[i];
                temp += power;
            }
            sqrtn = sqrt ( n );
            sum *= temp;
        }
    }
    if ( n != 1 )
    {

        sum *= (n+1);
    }

    return sum;
}


vector<bool> segmentedSieveNoPreGen(ll L, ll R)
 {
    vector<bool> isPrimes(R - L + 1, true);
    ll lim = sqrt(R);
    ll i,j;
    for (i = 2; i <= lim; ++i)
        for (j = max(i * i, ((L + i - 1) / i )*i); j <= R; j += i)
            isPrimes[j - L] = false;

    if (L == 1)
        isPrimes[0] = false;

    if(L==0)
    {
       isPrimes[0] = false;
       isPrimes[1]=false;
    }
    return isPrimes;

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

ll n,l,r,c=0;

cin>>l>>r;

 vector<bool>v;

 v=segmentedSieveNoPreGen(l,r);
 ll i=0;

 for(auto x:v)
    if(x)
        c++;


 cout<<c<<nll;

}
