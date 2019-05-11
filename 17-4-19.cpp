#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=0,c=0,t[400000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>t[i];
    for(i=0;i<n;i++)
    {
        if(t[i]!=t[0])
            a=max(a, i);
        if(t[i]!=t[n-1])
            a=max(a, n-i-1);
    }
    cout<<a<<endl;
    return 0;
}