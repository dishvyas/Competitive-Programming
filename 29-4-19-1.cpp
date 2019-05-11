#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,i,j,a[1001],b[1001];
    cin>>n>>m>>r;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m,greater<int>());
    int t=r;
    int c=0,d=1;
    int sum=0;
    j=0;
    d=t%a[j];
    c+=t/a[j];
    sum=c*b[0];
    if(sum+d>t)
        cout<<sum+d<<endl;
    else
        cout<<t<<endl;
    return 0;
}