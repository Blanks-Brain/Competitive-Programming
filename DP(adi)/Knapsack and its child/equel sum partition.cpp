#include<bits/stdc++.h>

using namespace std;

int main()
{

int n,i,j,b,c=0,sum=0;


cin>>n;

int a[n+5];

for(i=0; i<n; i++)
{
cin>>a[i];
sum+=a[i];
}

if(sum%2==1)
cout<<"NO\n";

else
{
c=sum/2;
bool t[n+1][c+1];

 for(i=0; i<=n; i++)
 {
  for(j=0; j<=c; j++)
  {
   if(i==0)
    t[i][j]=false;

    if(j==0)
    t[i][j]=true;

  }

 }


  for(i=1; i<=n; i++)
  {
   for(j=1; j<=c; j++)
   {
    if(a[i-1]<=j)
    {
     t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
    }

    else
    t[i][j]=t[i-1][j];

   }

  }

  if(t[n][c])
  cout<<"YES\n";

  else
  cout<<"NO\n";


}



}
