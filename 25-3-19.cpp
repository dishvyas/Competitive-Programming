#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long signed int n,i,b,c=0,d=0;
    vector<long long signed int> a,v;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>b;
        c+=b;
        v.push_back(b);
    }
    if(c<d)
        d=c;
    a[0]=1-d;
    for(i=1;i<n-1;i++)
        a[i]=a[i-1]+v[i-1];
        bool ok=true;
    for(i=0;i<n;i++)
    {
        if(a[i]<1|a[i]>n)
            ok=false;
    } 
    if (ok)
        ok = set<long long>(a.begin(), a.end()).size() == n;
    if (ok) 
    {
        for(i=0;i<n;i++)
            cout << a[i] << " ";
    } 
    else
        cout << -1 << endl;
    return 0;
}