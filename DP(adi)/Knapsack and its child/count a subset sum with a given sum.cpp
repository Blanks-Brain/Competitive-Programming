#include<bits/stdc++.h>

using namespace std;

int main()

{
 int n,b,c,i,j,sum;

 cin>>n>>sum;

 int a[n+2];
 int t[n+1][sum+1];

 for(i=0; i<n; i++)
 cin>>a[i];


 for(i=0; i<=n; i++)
 {
  for(j=0; j<=sum ; j++)
  {
   if(i==0)
   t[i][j]=0;

   if(j==0)
   t[i][j]=1;

  }
 }

 for(i=1; i<=n ; i++)
 {
  for(j=1; j<=sum; j++)
  {
   if(a[i-1]<=j)
    t[i][j]= t[i-1][j-a[i-1]] + t[i-1][j];

    else
    t[i][j]=t[i-1][j];

  }

 }

cout<<t[n][sum]<<endl;

}
