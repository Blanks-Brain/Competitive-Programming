#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,w,i,j,b,c;

    cin>>n>>w;

    int wt[n+1];
    int val[n+1];

    int t[n+1][w+1];

    for(i=0; i<n; i++)
        cin>>wt[i];

    for(i=0; i<n; i++)
        cin>>val[i];




    for(i=0; i<=n; i++)
    {
        for(j=0; j<=w; j++)
        {
            if(i==0 || j==0)
                t[i][j]=0;

        }

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=w; j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]], t[i-1][j]);

            }

            else
                t[i][j]=t[i-1][j];

        }

    }

     for(i=0; i<=n; i++)
     {
      for(j=0; j<=w; j++)
      {
       cout<<t[i][j]<<"  ";
      }
      cout<<endl;
     }

    cout<<t[n][w]<<endl;




}
