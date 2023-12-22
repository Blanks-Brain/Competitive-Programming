#include<bits/stdc++.h>

using namespace std;

int main()
{

 int n,sum,i,j,b;

 cin>>n>>sum;

 int coin[n];

 int t[n+1][sum+1];

 for(i=0; i<n; i++)
 cin>>coin[i];


 for(i=0; i<=n; i++)
 {
  for(j=0; j<=sum; j++)
  {
   if(i==0)
   t[i][j]=0;

   if(j==0)
   t[i][j]=1;




  }

 }

  for(i=1; i<=n; i++)
  {
   for(j=1; j<=sum; j++)
   {
    if(coin[i-1]<=j)
    t[i][j]= t[i][j-coin[i-1]] + t[i-1][j];

    else
    t[i][j]=t[i-1][j];

   }

  }



 cout<<t[n][sum]<<endl;





}
