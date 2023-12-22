#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,b,c=0;

  cin>>n;

  while(n%2==0)
  {
   c++;
  n/=2;

  }

  for(i=3; i*i<=n; i=i+2)
  {
    while(n%i==0)
    {
     c++;
     n/=i;
    }

  }

 if(n>2)
 c++;

 cout<<c<<endl;

}








