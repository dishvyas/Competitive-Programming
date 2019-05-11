#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v[100000];
    int dis[100000];
    int n,m,i,j,x,y,w;
    cin>>n>>m;
    for(i=1;i<m;i++)
    {
        cin>>x>>y>>w;
        v[i].push_back(x);
        v[i].push_back(y);
        v[i].push_back(w);
    }
    for(i=0;i<m+1;i++)
        dis[i]=INT_MAX;
    dis[1]=0;
    for(i=0;i<n-1;i++)
    {
        j=1;
        while(v[j].size()!=0)
        {
            if(dis[ v[j][0]  ] + v[j][2] < dis[ v[j][1] ] )
                dis[ v[j][1] ] = dis[ v[j][0]  ] + v[j][2];
            j++;
        }
    }
    for(i=0;i<n-1;i++)
        cout<<dis[i]<<" ";
    cout<<"\n";
    return 0;
}