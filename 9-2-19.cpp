#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100004],sum=0;
    long long int x,y=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    y=(sum/n)+1;
    cout<<y<<endl;
    return 0;
}