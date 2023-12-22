#include<bits/stdc++.h>

#define ll long long int

using namespace std;

const int n=1e6;

vector<ll>primes;

vector<bool>isprime(1e6,false);

void sieve()
{
    int i,b,j;

    int a[n+1];

    for(i=0; i<=n; i++)
    {
        a[i]=1;
    }
    for(i=2; i*i<=n; i++)
    {
        if(a[i]==1)
        {

            for(j=i*i; j<=n; j=j+i)
            {
                a[j]=0;
            }


        }


    }


    for(i=2; i<=n; i++)
    {
        if(a[i]==1)
        {
          primes.push_back(i);
          isprime[i]=true;
        }

    }


}

int main()

{

 ll a;

 cin>>a;

 sieve();

 if(a<=n && isprime[a])
 cout<<"YES\n";

 if(a<=n && !isprime[a])
 cout<<"NO\n";

else if(a>n)
 {
  for(auto x:primes)
  {
   if(x*x>a)
   {
    cout<<"YES\n";
    return 0;
   }

  else if(a%x==0)
   {
    cout<<"NO\n";
    return 0;
   }

  }

  cout<<"YES\n";

 }


}



