#include<bits/stdc++.h>
using namespace std;
bool visited[100005];
vector<long> adj[100005];
void dfs(int s) 
{
    visited[s] = true;
    for(int i = 0;i < adj[s].size();++i)    
    {
        if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
    }
}
void initialize() 
{
    for(int i = 0;i < 10;++i)
        visited[i] = false;
}
int main()
{
    long int t,n,m,cl,cr,i,j,x,y; 
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>cl>>cr;
        long int c=0,cost=0;
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);                 
            adj[y].push_back(x); 
        }
        initialize();
        for(i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                dfs(i);
                c++;
            }
        }
        if(cl<=cr)
            cost=cl*n;
        else
        {
            cost=((c-1)*cr)+cl;
        }
        cout<<cost<<endl;
    }
    return 0;
}
