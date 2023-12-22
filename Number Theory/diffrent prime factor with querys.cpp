#include<bits/stdc++.h>

using namespace std;

int pf[1000005];


int main()

{
    int n,i,j,t;

    pf[1]=1;
    for(i=2; i<=1000003; i++)
    {
        if(pf[i]==0)
        {
            for(j=i; j<=1000003; j+=i)
            {
                pf[j]++;

            }

        }

    }

     cin>>t;

     while(t--)
     {
      cin>>n;

      cout<<pf[n]<<endl;


     }




}
