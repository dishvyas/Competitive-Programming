#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,i,a=0,b=0,c=0;
    string s;
    string t="";
    string r="";
    // vector<long long int> v,v1;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<(s.length())/2;i++)
            t[i]=t[i]+s[i];        
        for(i=(s.length())/2;i<s.length();i++)
            r[i]=r[i]+s[i];
        for(i=0;i<(s.length())/2;i++)
            cout<<t[i];
        for(i=0;i<(s.length())/2;i++)
            cout<<r[i];
        cout<<"\n";
    }
    return 0;
}