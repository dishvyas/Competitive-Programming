#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int v[10005],n,i,b,c=0,d=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    d=v[1];
    for(i=1;i<=n;i++)
    {
        if(d<=i&&v[i]==i)
        {
            d=v[i];
            c++;        
        }
        else
        {
            d=v[i];
            if(i==n)
            {
                d=v[i];
                c++;        
            }
            continue;
        }  
    }
    cout<<c<<endl;
    return 0;
}