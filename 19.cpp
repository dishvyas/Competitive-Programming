#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    char a[1003][1003];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i][i] == '#')
            {
                if(i!=1||i!=n-1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    return 0;
}