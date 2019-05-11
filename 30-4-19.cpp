#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0,d=0;
    char a[51][51];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='#')
                c++;
            else if(a[i][j]=='.')
                d++;
        }
    }
    int b=d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]=='.'&&a[i][j+1]=='.'&&a[i+1][j]=='.'&&a[i-1][j]=='.'&&a[i][j-1]=='.')
            {
                a[i][j]='#';
                a[i][j+1]='#';
                a[i][j-1]='#';
                a[i+1][j]='#';
                a[i-1][j]='#';
                b-=5;
            }
            else
            {
                continue;
            }
            
        }
    }
    if(b==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}