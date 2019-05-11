#include<bits/stdc++.h> 
using namespace std; 
long long int prouct(long long int k)
{
    long long int product=1;
    while(k!= 0)
    {
        product = product * (k % 10);
        k = k / 10;
    }
    return product;
}
int main()
{
    long long int n,a=0,b=0,f=0;
    vector<long long int> v;
    cin>>n;
    a=n;
    b=n-1;
    f=n-2;
    for(long long int i=1;i<=n;i++)
    {
        a=prouct(i);
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    f=v[0];
    cout<<f<<endl;
}