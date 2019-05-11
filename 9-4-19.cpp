#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,j,a,sum=0;
    vector<long int> o,e;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        if(a%2==0)
            e.push_back(a);
        else
            o.push_back(a);
    }
    sort(e.begin(),e.end(),greater<int>());
    sort(o.begin(),o.end(),greater<int>());
    if(e.size()==o.size())
        cout<<0<<endl;
    else if(e.size()>o.size()&&o.size()>0)
    {
        for(i=0;i<e.size();i++)
        {
            sum-=e[i];
            sum-=o[i];
        }
        cout<<sum<<"\n";
    }
    else if(o.size()==0)
    {
        sum-=e[0];
        cout<<sum<<"\n";
    }
    else if(e.size()==0)
    {
        sum-=o[0];
        cout<<sum<<"\n";
    }
    else if(o.size()>e.size()&&e.size()>0)
    {
        for(i=0;i<o.size();i++)
        {
            sum-=e[i];
            sum-=o[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}