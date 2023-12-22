#include<bits/stdc++.h>

using namespace std;

int main()

{

  long long  int n,i,j,d,e,k,m=0,l;

    cin>>n;

     int a[n];

     map<long long ,long long>mp;

    for(i=0; i<n; i++)
    {
     cin>>a[i];

     }
    for(i=0,j=0; i<n; i++)
     {
      j=max(mp[a[i]],j);
      m=max(m,i-j+1);
      mp[a[i]]=i+1;
     }

   cout<<m<<endl;

}
