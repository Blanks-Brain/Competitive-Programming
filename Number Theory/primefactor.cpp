#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,b,c;

  cin>>n;

  while(n%2==0)
  {
   cout<<2<< " ";
  n/=2;

  }

  for(i=3; i*i<=n; i=i+2)
  {
    while(n%i==0)
    {
     cout<<i<<" ";
     n/=i;
    }

  }

 if(n>2)
 cout<<n<<endl;

}







