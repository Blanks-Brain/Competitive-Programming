#include<bits/stdc++.h>

using namespace std;

 const int n=1e6;

int main()

{
 int i,b,j;



 int a[n+1];
for(i=0; i<=n; i++)
{
 a[i]=1;
}
 for(i=2; i*i<=n; i++)
 {
  if(a[i]==1)
  {

   for(j=i*i; j<=n; j=j+i)
   {
    a[j]=0;
   }


  }


 }




  for(i=2; i<=20; i++)
  {
   if(a[i]==1)
    {
    cout<<i<<" ";
    }

  }








}


