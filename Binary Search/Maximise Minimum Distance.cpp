
#include<bits/stdc++.h>

#define ll long long int

#define pb push_back

#define dor for

using namespace std;

const int Mod=1e9+7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isFeasible(int a[],int n,int k, int mid)
 {
    int pos=a[0],element=1;

    for(int i=1; i<n; i++)
    {
       if(a[i]-pos>=mid)
       {
         pos=a[i];
         element++;

         if(element==k)
          return true;
       }
    }

    return false;
 }

int largestMinDistance(int a[] , int n, int k)
 {

   int result=-1;

 int l=1;
  int r=a[n-1];
 // cout<<l<<" "<<r<<endl;
   while(l<r)
   {
     int mid=(l+r)/2;

      if(isFeasible(a,n,k,mid))
      {
         result=max(result,mid);
         l=mid+1;
      }

      else
        r=mid;
    }
  return result;
 }

int main()
{
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

 //for()

int t;

 cin>>t;

 while(t--)
 {
  int n,i,j,k,ans=0;

 cin>>n>>k;

 int a[n];

 for(i=0; i<n; i++)
   cin>>a[i];

 sort(a,a+n);

 ans=largestMinDistance(a , n , k);

 cout<<ans<<endl;

 }




}
