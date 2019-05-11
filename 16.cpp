#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,a=0,b=0,c=0;
    cin>>n>>k;
    a=(2*n)/k;
    if((2*n)%k>0)
    {
        a+=1;
    }
    b=(5*n)/k;
    if((5*n)%k>0)
    {
        b+=1;
    }
    c=(8*n)/k;
    if((8*n)%k>0)
    {
        c+=1;
    }
    cout<<a+b+c<<endl;
    return 0;
}