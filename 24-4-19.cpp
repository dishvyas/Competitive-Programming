#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,a=0,b=0;
    vector<long long int> e1,o1,v1,e,o;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
            e1.push_back(a);
        else
            o1.push_back(a);
    }
    for(i=0;i<m;i++)
    {
        cin>>b;
        if(b%2==0)
            e.push_back(b);
        else
            o.push_back(b);
    }
    long long int c=min(e.size(),o1.size());
    long long int d=min(e1.size(),o.size());
    // for(i=0;i<c;i++)
    // {
    //     b=e[i]+o1[i];
    //     e[i]=INT_MAX;
    //     o1[i]=INT_MAX;
    //     e.pop_back();
    //     o1.pop_back();
    //     v1.push_back(b);
    //     cout<<v1[i]<<" ";
    //     cout<<"\n";
    // }
    // long long int d=max(o.size(),e1.size());
    // for(i=0;i<d;i++)
    // {
    //     b=e1[i]+o[i];
    //     e1[i]=INT_MAX;
    //     o[i]=INT_MAX;
    //     e1.pop_back();
    //     o.pop_back(); 
    //     v1.push_back(b);
    //     cout<<v1[i]<<" ";
    //     cout<<"\n";
    // }
    cout<<c+d<<endl;
    return 0;
}