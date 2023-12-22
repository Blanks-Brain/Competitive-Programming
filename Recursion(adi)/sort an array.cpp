#include<bits/stdc++.h>

using namespace std;

void insertt(vector<int>&v,int temp);

void sortt(vector<int>&v)
{
    if(v.size()==1)
        return ;

    int temp=v[v.size()-1];
    v.pop_back();
    sortt(v);
    insertt(v,temp);
}

void insertt(vector<int>&v,int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }

    int val=v[v.size()-1];
    v.pop_back();

    insertt(v,temp);

    v.push_back(val);

    return ;


}

int main()

{

    int n,i,b;

    cin>>n;

    vector<int>v(n);

    for(i=0; i<n; i++)
        cin>>v[i];

    sortt(v);

    for(i=0; i<n; i++)
        cout<<v[i]<<" ";



}
