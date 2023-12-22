#include<bits/stdc++.h>

using namespace std;


void insertt(stack<int>&st,int temp);

void sortt(stack<int>&st)
{

    if(st.size()==1)
        return ;

    int temp=st.top();

    st.pop();

    sortt(st);

    insertt(st,temp);


}

void insertt(stack<int>&st,int temp)
{

    if(st.empty() || st.top()<=temp)
    {
        st.push(temp);
       return ;
     }
    int valu=st.top();

    st.pop();

    insertt(st,temp);

    st.push(valu);


    return;
}

int main()

{
    int n,i;

    stack<int>st;

    cin>>n;
    int a;

    for(i=0; i<n; i++)
    {
        cin>>a;
        st.push(a);
    }

    sortt(st);

    for(i=0; i<n; i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}
