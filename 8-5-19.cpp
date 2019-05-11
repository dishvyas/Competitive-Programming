#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a,b,c;
    vector<int> v,v1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {    
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++)
        {   
            cin>>b;
            v1.push_back(b);
        }
        sort(v.begin(),v.end(),greater<int>());
        sort(v1.begin(),v1.end(),greater<int>());
        c=0;
        for(i=0;i<v.size();i++)
        {
            if(v1[i]>v[i])
                c++;
        }
        if(c<n)
            cout<<"LOSE"<<endl;
        else if(c==n)
            cout<<"WIN"<<endl;
    }
    return 0;
}