#include<bits/stdc++.h>

using namespace std;

int main()

{
    int q, n,b,i,j,sum=0,c;

    cin>>n;
    vector<int>v;
    int a[n+2];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    bool t[n+1][sum+1];

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
                t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];

            else
                t[i][j]=t[i-1][j];

        }
    }

    for(i=0; i<=sum/2; i++)
    {
        if(t[n][i]==true)
            v.push_back(i);

    }
    int ans=INT_MAX;

    for(auto x:v)
    {
        ans=min(ans,(sum-(2*x)));
     // cout<<x<<" ";
    }

    cout<<ans<<endl;


}
