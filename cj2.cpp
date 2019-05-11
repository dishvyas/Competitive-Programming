#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i;
    cin>>t;
    int f=0;
    while(t--)
    {
        vector<char> v;
        string s;
        cin>>n;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='E')
                v.push_back('S');
            else
                v.push_back('E');
        }
        cout<<"Case #"<<++f<<": ";
        for(i=0;i<v.size();i++)
            cout<<v[i];
        cout<<"\n"; 
    }
    return 0;   
}