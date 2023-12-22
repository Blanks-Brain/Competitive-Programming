
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int M=1e9+7;

int binaryexp(int a,int b,int m)
{

  int ans=1;

  while(b>0)
  {
     if(b&1)
     {
      ans=(ans*1LL*a)%m;
     }
     a=(a*1LL*a)%m;

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
cin>>a>>b>>c;
cout<<binaryexp(a,binaryexp(b,c,M-1),M)<<endl;

}





}
