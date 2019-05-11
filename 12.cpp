#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    char temp;
    char a[200005],b[200005];
    string r,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    temp=a[n-1];
    for(i=0;i<n;i++)
    {
        if(temp!=b[i])
        {
            s+=b[i];
            cout<<b[i];
        }
    }
    if(s.empty())
    {
        for(i=0;i<n-1;i++)
        {
            cout<<b[i];
        }
    }   
    return 0;    
}