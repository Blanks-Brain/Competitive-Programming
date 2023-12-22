
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int M=1e9+7;

int binExpIter(int a,int b)
{
     int ans=1;

     while(b)
     {
        if(b&1)
        {
            ans=(ans*1LL*a)%M;
        }

        a=(1LL*a*a)%M;

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
