#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,b,c,n,w;

    int t[1003][1005];

    cin>>n>>w;

    int wt[n+5],val[n+5];

    for(i=0; i<n; i++)
        cin>>wt[i];

     for(i=0; i<n; i++)
     cin>>val[i];



    for(i=0; i<=n; i++)
        for(j=0; j<=w; j++)
        {
            if(i==0 || j==0)
                t[i][j]=0;

        }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=w; j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=max( val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);

            }

            else
                t[i][j]=t[i-1][j];


        }

    }


cout<<t[n][w]<<endl;

  /* for(i=0; i<=n; i++)
   {
    for(j=0; j<=w; j++)
    {
     cout<<t[i][j]<<"  ";
    }

    cout<<endl;
   }
*/
}
