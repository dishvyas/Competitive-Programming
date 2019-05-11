#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v,v2;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++)
        {
            j=i+2;
            if(v[i]>0&&v[j]>0)
                v2.push_back(v[i]+v[j]);
            else if(v[i]>0&&v[j]<0)
                v2.push_back(v[i]);
            else if(v[i]<0&&v[j]>0)
                v2.push_back(v[j]);
        }
        int f,h=0;
        vector<int> u;
        double max = *max_element(v2.begin(), v2.end());
        for(i=0;i<v2.size();i++)
        {
            if(max==v2[i])
            {
                f=i;
                u.push_back(v2[i]);
                u.push_back(v2[i+2]);
            }
        }
        vector<int> g;
        if(v[f]>0&&v[f+2]>0)
        {
            g.push_back(v[f]);
            g.push_back(v[f+2]);
        }
        else if(v[f]>0&&v[f+2]<0)
        {    
            g.push_back(v[f]);
            g.push_back(0);
        }
        else if(v[f]<0&&v[f+2]>0)
        {    
            g.push_back(v[f+2]); 
            g.push_back(0);   
        }
        sort(g.begin(),g.end());
        if(g[0]==0)
            cout<<g[1]<<endl;
        else
            cout<<g[0]<<g[1]<<endl;
        
    }
    return 0;
}