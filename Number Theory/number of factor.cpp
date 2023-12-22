#include<bits/stdc++.h>

using namespace std;

int main()

{

 int n,i,b;

 unordered_map<int,int>mp;

  cin>>n;
 i=2;
  while(n%2==0)
  {
   mp[2]++;
   n/=2;

  }

for(i=3; i*i<=n; i=i+2)
  {
    while(n%i==0)
    {
      mp[i]++;
     n/=i;
    }

  }

 if(n>2)
 mp[n]++;

 for(auto x: mp)
 cout<<x.first<<" "<<x.second<<endl;


}
