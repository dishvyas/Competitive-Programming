#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    long long int a[101],d[101];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>d[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[n-1]+a[i+1]<d[i])
                    v.push_back(d[i]);
            }
            else if(a[i-1]+a[i+1]<d[i])
                v.push_back(d[i]);
            else if(i==n-1)
            {
                if(a[0]+a[n-2]<d[i])
                    v.push_back(d[i]);
            }                
        }
        sort(v.begin(),v.end());
        if(!v.empty())
            cout<<v.back()<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}