
#include<bits/stdc++.h>

#define ll long long int

#define pb push_back

#define nl "\n"

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);


// int t;

//  cin>>t;

//  while(t--)
//  {


//  }

 int n,i,j,c=0;


cin>>n;

 int a[n];

 for(i=0; i<n; i++)
   cin>>a[i];


int  mid=0, l=0,r=n-1;


 while(l<r)
 {
   mid=(l+r)/2;

  //cout<<a[mid]<<" "<<mid<<" ";
   if(mid>0 && a[mid]<a[mid-1])
   {
    cout<<mid<<nl;
    c=1;
    break;
   }

   if(mid<n-1 && a[mid]>a[mid+1])
   {
    cout<<mid+1<<nl;
    c=1;
    break;
   }

   else if(mid>0 && a[mid-1]>=a[r])
     l=mid;

   else
     r=mid;

 //cout<<l<<" "<<r<<endl;
 }

 if(c==0)
cout<<0<<endl;




}
