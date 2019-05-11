#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[200];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==2&&a[i+1]==3)
        {
            j=0;
        }
        else if(a[i]==3&&a[i+1]==2)
        {
            j=0;
        }
        else if(a[i]==3&&a[i+1]==1&&a[i+2]==2)
        {
            j+=6;
        }
        else if(a[i]==2&&a[i+1]==1&&a[i+2]==3)
        {
            j+=7;
        }
        else if((a[i]==2&&a[i+1]==1&&n==2)|(a[i]==1&&a[i]==2&&n==2))
        {
            j+=3;
        }
        else if((a[i]==3&&a[i+1]==1&&n==2)|(a[i]==1&&a[i]==3&&n==2))
        {
            j+=4;
        }
    }
    if(j==0)
        cout<<"Infinite";
    else
    {
        cout<<"Finite"<<endl;
        cout<<j<<endl;
    }
    return 0;
}