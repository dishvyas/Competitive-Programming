#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,t;
    cin>>t;
    while(t--)
    {
        long int x,n,a=0,c=0;
        cin>>n>>x;
        a=x;
        string s;
        vector<long int> v;
        v.push_back(a);
        set<long int> s1;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]=='L')
            {
                a--;
                v.push_back(a);
            }
            else if(s[i]=='R')
            {
                a++;
                v.push_back(a);
            }
        }
        for(i=0;i<n;i++)
            cout<<v[i]<<endl;
        for(i=0;i<n;i++)
            s1.insert(v[i]);
        cout<<s1.size()<<endl;
    }
    return 0;
}