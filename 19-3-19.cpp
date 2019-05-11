#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int k,n,l[1000],r[1000],i,c=0,a=0,b=0;
    cin>>n;
    c=n;
    for(i=0;i<n;i++)
        cin>>l[i]>>r[i];
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(k>r[i])
            c--;
        else
            continue;        
    }
    cout<<c<<endl;
    return 0;
}