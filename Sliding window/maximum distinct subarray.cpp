//TWO POINTER METHOD

#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,b,c=1,d,i=0,j=0;

    string s;
    cin>>s;
    n=s.size();

    vector<int> a(300,0);

    a[s[0]]++;


    while(j!=n-1)
    {

        if(a[s[j+1]]==0)
        {

            j++;
            a[s[j]]=1;
            c=max(c,j-i+1);

        }

        else
        {
            a[s[i]]--;
            i++;

        }

    }

    cout<<c<<endl;


}
