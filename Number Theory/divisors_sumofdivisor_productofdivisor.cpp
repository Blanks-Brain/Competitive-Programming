
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


int binExpIter(int a,int b)
{
     int ans=1;

     while(b)
     {
        if(b&1)
        {
            ans=(ans*1LL*a)%Mod;
        }

        a=(1LL*a*a)%Mod;

        b>>=1;
     }

     return ans;
}


ll geometricsum(ll base,ll power)
{
    ll numerator=(binExpIter(base,power+1)-1+Mod)%Mod;

    ll denominatorInverse= binExpIter(base-1,Mod-2);

    return (numerator*denominatorInverse)%Mod;
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

ll n,i,j,c=0;

 cin>>n;

 vector<ll>primes(n);
 vector<ll>exponent(n);

 for(i=0; i<n; i++)
 {
    cin>>primes[i]>>exponent[i];
 }

 ll divisors=1;

 for(i=0; i<n; i++)
 {
    divisors=(divisors*(exponent[i]+1))%Mod;
 }

 ll sumofdivisors=1;

 for(i=0; i<n; i++)
 {
    sumofdivisors=(sumofdivisors*geometricsum(primes[i],exponent[i]))%Mod;
 }

 ll productOfDivisors = 1;

  bool oddExponent = false;
  int positionOfOddExponent;
  for(i=0; i<n; i++)
  {
    if(exponent[i]%2)
    {
      oddExponent=true;
      positionOfOddExponent=i;
    }
  }

  if(oddExponent)
  {
     ll outerExponent = 1;

     for(i=0; i<n; i++)
     {
        if(i==positionOfOddExponent)
          outerExponent = (outerExponent*(exponent[i]+1)/2%(Mod-1));

         else
          outerExponent = (outerExponent*(exponent[i]+1)%(Mod-1));

     }

     for(i=0; i<n; i++)
      productOfDivisors = (productOfDivisors*binExpIter(primes[i],(exponent[i]*outerExponent)%(Mod-1)))%Mod;
  }

  else
    {
       ll outerExponent =1;

       for(i=0; i<n; i++)
         outerExponent=(outerExponent*(exponent[i]+1))%(Mod-1);

       for(i=0; i<n; i++)
         productOfDivisors = (productOfDivisors* binExpIter(primes[i],((exponent[i]/2)*outerExponent)%(Mod-1)))%Mod;
    }

    cout<<divisors<<" "<<sumofdivisors<<" "<<productOfDivisors<<nll;
}
