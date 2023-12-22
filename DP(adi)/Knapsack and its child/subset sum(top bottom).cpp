#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n,i,j,b,c,sum;

    cin>>n>>sum;

    bool t[n+1][sum+1];

    int a[n+4];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=sum; j++)
        {
            if(i==0)
                t[i][j]=false;

            if(j==0)
                t[i][j]=true;

        }

    }


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=sum; j++)
        {
            if(a[i-1]<=j)
                t[i][j]=( t[i-1] [j-a[i-1] ] || t[i-1][j] );

            else
                t[i][j]=t[i-1][j];
        }

    }

   if(t[n][sum]==true)
   cout<<"YES\n";

   else
   cout<<"NO\n";



}
