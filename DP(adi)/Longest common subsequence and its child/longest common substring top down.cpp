#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n=0,m=0,ans=0;

    string a,b;

    cin>>a>>b;

    n=a.size();
    m=b.size();

    int t[n+2][m+2];

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
        }

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
                ans=max(t[i][j],ans);
             }

            else
            t[i][j]=0;

        }

    }

    cout<<ans<<endl;


}
