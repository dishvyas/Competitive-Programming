#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1001],b=0;
    char s[1001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(count(s,s+n,s[i])>n/2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0;i<n/2;i++)
            {
                cout<<s[i];
            }
        }
    }
    return 0;
}