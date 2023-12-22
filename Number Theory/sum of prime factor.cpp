#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,b,c,sum=0;

  cin>>n;

  while(n%2==0
  {
   sum+=2;
  n/=2 ;

  }

  for(i=3; i*i<=n; i=i+2)
  {
    while(n%i==0)
    {
     sum+=i;
     n/=i;
    }

  }

 if(n>2)
 sum+=n;

 cout<<sum<<endl;

}








