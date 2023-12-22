#include<bits/stdc++.h>

using namespace std;

static int t[1005][1005];

int common_sub(string a,string b,int n,int m)
{

  if(n==0 || m==0)
  return 0;

  if(t[n][m]!=-1)
  {
  return t[n][m];

  }

  if(a[n-1]==b[m-1])
  return t[n][m]=1+common_sub(a,b,n-1,m-1);

  else
  return  t[n][m]=max(common_sub(a,b,n-1,m),common_sub(a,b,n,m-1));



}

int main()

{
 string a,b;

 cin>>a>>b;

 memset(t,-1,sizeof(t));
 cout<<common_sub(a,b,a.size(),b.size())<<endl;

}

