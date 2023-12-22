#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll M=1e18+7;

ll binmultiply(ll a,ll b)
{
        ll ans=0;

     while(b)
     {
        if(b&1)
        {
            ans=(ans+a)%M;
        }

        a=(a+a)%M;

        b>>=1;
     }

     return ans;
}

ll binExpIter(ll a,ll b)
{
     ll ans=1;

     while(b)
     {
        if(b&1)
        {
            ans=binmultiply(ans,a);
        }

        a=binmultiply(a,a);

        b>>=1;
     }

     return ans;
}



int main()

{

int t;

cin>>t;

while(t--)
{
int a,b,c;
cin>>a>>b;
cout<<binExpIter(a,b)<<endl;

}





}

