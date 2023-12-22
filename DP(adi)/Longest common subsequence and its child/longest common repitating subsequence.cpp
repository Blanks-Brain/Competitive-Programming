#include<bits/stdc++.h>

using namespace std;

int main()

{
  int i,j,n,m;

  string a,b;

  cin>>a;

  n=0,m=0;

  n=m=a.size();
//cout<<n<<" "<<m<<endl;
  b=a;

  int t[n+1][m+1];
  for(i=0; i<=n; i++)
  {
   for(j=0; j<=m; j++)
   {
     if(i==0 || j==0)
      t[i][j]=0;

   }
  }


  for(i=1; i<=n; i++)
  {
    for(j=1; j<=m; j++)
    {

     if(a[i-1]==b[j-1] && i!=j)
     t[i][j]=1+t[i-1][j-1];

     else
      t[i][j]=max(t[i-1][j],t[i][j-1]);

    }

  }

  cout<<t[n][m]<<endl;

}
