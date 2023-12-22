
#include<bits/stdc++.h>

#define ll long long int


#define dll long double

#define pb push_back

#define nll "\n"

using namespace std;

const int N=1e5+10;

vector<int>g[N];

bool vis[N];

void dfs(int vertex)
 {
   // if(vis[vertex])
   //   return;
   vis[vertex]=true;`
   cout<<vertex<<nll;
    for(int child:g[vertex])
    {
       // cout<<"Parent: "<<vertex<<" "<<"child: "<<child<<nll;
       if(vis[child])
        continue;

        dfs(child);
    }

 }

int main()
{

  int E,V,i,j;

  cin>>V>>E;

  for(i=0; i<E; i++)
  {
    int v1,v2;

    cin>>v1>>v2;

    g[v1].pb(v2);
    g[v2].pb(v1);
  }

  dfs(1);
}
