#include<bits/stdc++.h>

using namespace std;

bool sub_sum(int a[],int sum,int n)
{

  if(n==0 && sum==0)
  return true;

  if(n==0 && sum!=0)
  return false;

  if(a[n-1]<=sum)
  return  (sub_sum(a,sum-a[n-1],n-1) || sub_sum(a,sum,n-1) );

  else if(a[n-1]>sum)
  return sub_sum(a,sum,n-1);



}

int main()

{

 int n,sum,b,i,j;

 cin>>n>>sum;

 int a[n+3];

 for(i=0; i<n; i++)
 cin>>a[i];

 bool ans;

 ans=sub_sum(a,sum,n);

 if(ans)
 cout<<"YES\n";

 else
 cout<<"NO\n";





}
