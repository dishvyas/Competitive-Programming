#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,k,g=0,n=0;
    cin>>w>>h>>k;
    while(k>0)
    {
        n=k-1;
        g+=2*((w-(4*n))+(h-(4*n)))-4;
        k--;
    }
    cout<<g<<endl;
    return 0;
}