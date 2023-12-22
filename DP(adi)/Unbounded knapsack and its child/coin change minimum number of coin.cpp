#include<bits/stdc++.h>

using namespace std;

int main()

{
 int n,i,j,sum,b;

 cin>>n>>sum;

 int coin[n+1];

int  t[n+1][sum+1];


 for(i=0; i<n; i++)
 cin>>coin[i];


 for(i=0; i<=n; i++)
 {
  for(j=0; j<=sum; j++)

  {
    if(j==0)
    t[i][j]=0;

    if(i==0)
    t[i][j]=INT_MAX-1;

  }


 }


 for(j=1; j<=sum; j++)
 {
  if(j%coin[0]==0)
  t[1][j]=j/coin[0];

  else
  t[1][j]=INT_MAX-1;

 }

  for(i=2; i<=n; i++)
  {
   for(j=1; j<=sum; j++)
   {
    if(coin[i-1]<=j)
    t[i][j]=min( 1+t[i][j-coin[i-1]],t[i-1][j] );

    else
    t[i][j]=t[i-1][j];

   }

  }


 cout<<t[n][sum]<<endl;


}

