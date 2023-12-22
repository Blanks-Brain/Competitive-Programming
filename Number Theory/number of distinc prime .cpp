#include<bits/stdc++.h>

using namespace std;

int main()

{
  int n,i,b,c=0;

  cin>>n;

 unordered_set<int>s;

  while(n%2==0)
  {
   s.insert(2);
   n/=2;

  }

  for(i=3; i*i<=n; i=i+1)
  {
   while(n%i==0)
   {
    s.insert(i);
    n/=i;
   }

  }

  if(n>2)
  s.insert(n);

  cout<<s.size()<<endl;

}
