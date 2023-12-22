#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n=0,m=0,i,j,d;

    string a,b,c;

    cin>>a>>b;

    n=a.size();
    m=b.size();

    int  t[n+1][m+1];

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
            if(a[i-1]==b[j-1])
                t[i][j]=1+t[i-1][j-1];

            else
            {
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }

        }

    }

    i=n;
    j=m;

    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            c+=a[i-1];
            i--;
            j--;
        }

        else
        {
            if(t[i-1][j]>t[i][j-1])
                i--;

            else
                j--;

        }

    }

    reverse(c.begin(),c.end());
    cout<<c<<endl;


}
