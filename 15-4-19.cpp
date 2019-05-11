#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,a,c,i;
        long long int b=0;
        set<pair<int,int> > p;
        cin>>n>>m>>k;
        for(i=0;i<k;i++)
        {
            cin>>a>>c;
            p.insert((make_pair(a,c)));
        }
        for(auto it=p.begin();it!=p.end();it++)
        {
            a=0;
            pair<int,int> p1(it->first+1,it->second);
            pair<int,int> p2(it->first,it->second+1);
            pair<int,int> p3(it->first,it->second-1);
            pair<int,int> p4(it->first-1,it->second);
            if(p.find(p1)!=p.end())
                a++;
            if(p.find(p2)!=p.end())
                a++;
            if(p.find(p3)!=p.end())
                a++;
            if(p.find(p4)!=p.end())
                a++;
            b+=(4-a);
        }
        cout<<b<<endl;
    }  
    return 0;
}