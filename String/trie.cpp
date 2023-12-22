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


struct node
{
    bool endmark;

    node *next[26+1];
    int count;
    node()
    {
        endmark=false;
         count=0;
        for(int i=0; i<26; i++)
            next[i]=NULL;

    }
} *root;

void insert(string str, int len)
{
    node *curr = root;

    for(int i=0; i<len; i++)
    {
        int key=str[i]-'a';

        if(curr->next[key]==NULL)
            curr->next[key]=new node();

        curr=curr->next[key];
        curr->count++;
    }

    curr->endmark=true;
}

bool search(string str, int len)
{
    node *curr = root;

    for(int i=0; i<len; i++)
    {
        int key=str[i]-'a';

        if(curr->next[key]==NULL)
           return false;

        curr=curr->next[key];
    }

    return  curr->endmark;
}

void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);
    delete (cur);
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


 root = new node();


 int n,i,j,c=0;

 string s;

 cin>>n;

 for(i=0; i<n; i++)
 {
    cin>>s;

    insert(s,s.size());

 }

 int k;

cin>>k;

while(k--)
{
     cin>>s;

     if(search(s,s.size()))
       cout<<"Yes\n";

     else
        cout<<"No\n";
}

del(root);


}
