#include<bits/stdc++.h>

using namespace std;

int common_sub(string a,string b,int n,int m)
{

  if(n==0 || m==0)
  return 0;

  if(a[n-1]==b[m-1])
  return 1+common_sub(a,b,n-1,m-1);

  else
  return  max(common_sub(a,b,n-1,m),common_sub(a,b,n,m-1));



}

int main()

{
 string a,b;

 cin>>a>>b;

 cout<<common_sub(a,b,a.size(),b.size())<<endl;

}
