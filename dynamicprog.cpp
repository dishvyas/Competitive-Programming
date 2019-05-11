#include<bits/stdc++.h>
using namespace std;
long int reducetoOne(long int n)
{
    long int*cache;
    cache= new long int[n+1];       
    cache[1]=1;
    for(long int i=2;i<=n;i++)
        cache[i]=(i%1000000007+cache[i-1]+(i*cache[i-1]))%1000000007;
    return cache[n];
}
int main()
{
    long int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        vector<long int> v,v1;
        cin>>n;
        for(i=1;i<=n;i++)
            v.push_back(i);
        cout<<reducetoOne(n)<<endl;
    }
}