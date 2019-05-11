#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,a[1001],i;
    cin>>n>>r;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos=0,b=0,c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            pos=i;
            b=pos-(r-1);
            c=pos+(r-1);
            d+=(b+c);
        }
    }
    if(d==n)
    {
        
    }
}