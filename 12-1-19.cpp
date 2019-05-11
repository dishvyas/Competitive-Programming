#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,z,a,b,c,g=0,bl=0,p=0;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    g=x;
    bl=abs(z-y);
    p=abs(y-x);
    if(bl<=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    cout<<bl<<b<<endl;
    return 0;
}