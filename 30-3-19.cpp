#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,c=0,a[5002];
    cin>>n>>k;
    if(n%2==0)
    {
        for(i=0;i<(n/2);i++)
            a[i]=(3*n)+i;
    }
    else
    {
        for(i=0;i<(n/2)+1;i++)
            a[i]=(3*n)+i;
    }
    int z=k+(n/2);
    if(n%2==0)
    {
        if(k>(n/2))

    }
    return 0;
}