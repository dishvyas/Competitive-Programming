#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,c=0,d=0,e=0,f=0;
        cin>>n;
        string s,s1="";
        vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>s;
            s1=s1+s;
            a=count(s1.begin(),s1.end(),'c');
            b=count(s1.begin(),s1.end(),'o');
            c=count(s1.begin(),s1.end(),'d');
            d=count(s1.begin(),s1.end(),'e');
            e=count(s1.begin(),s1.end(),'h');
            f=count(s1.begin(),s1.end(),'f');
        }
        a/=2;
        d/=2;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        v.push_back(e);
        v.push_back(f);
        // cout<<a<<endl;
        // cout<<b<<endl;
        // cout<<c<<endl;
        // cout<<d<<endl;
        // cout<<e<<endl;
        // cout<<f<<endl;
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        // for(i=0;i<v.size();i++)
            // cout<<v[i];
    }    
    // cout<<s1<<endl;
    return 0;
}