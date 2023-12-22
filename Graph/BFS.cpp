#include<bits/stdc++.h>

#define ll long long int


#define dll long double

#define pb push_back

#define nll "\n"

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//ordered_set<int>s:
//s.find_by_order(k):Kth element in "s",
//s.order_of_key(k):Number of item strictly less than k

// int dx[]={1,1,0,-1,-1,-1,0,1}; // for 8
// int dy[]={0,1,1,1,0,-1,-1,-1};

// int dx[]={1,0,-1,0}; // for 4
// int dy[]={0,1,0,-1};

const int N=1e5+10;

vector<int>g[N];

bool vis[N];

int level[N];

void bfs(int source)
{
    queue<int>q;

    vis[source]=true;
    q.push(source);

    while(!q.empty())
    {
       int curr_node=q.front();
       q.pop();
       cout<<curr_node<<" ";
       for(auto child: g[curr_node])
       {
          if(!vis[child])
           {
         q.push(child);
         vis[child]=true;
         level[child]=level[curr_node]+1;
           }
       }

    }
    cout<<nll;
}

int main()
{

ios::sync_with_stdio(false);
cin.tie(0);

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

    //cout<<"Case "<<in<<": "<<ans<<nll;


// int t;

//  cin>>t;

//  while(t--)
//  {



//  }


int n;

cin>>n;

for(int i=0; i<n; i++)
{
    int x,y;

    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
}

bfs(1);

 for(int i=1; i<=n; i++)
    cout<<i<<": "<<level[i]<<nll;
}
