#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,x,y,a=0,b=0;
    char c[10001][10001];
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        for(i=0;i<x;i++)
        {
            for(j=1;j<=y;j++)
            {
                cin>>c[i][j];
            }
        }
    }
    return 0;
}
