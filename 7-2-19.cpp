#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    string s;
    int a[26];
    while(t--)
    {
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-65]++;
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
            sum+=a[i];
        }
        vector<int>v;
        for(int i=1;i<=26;i++)
        {
            if(sum%i==0)
            {
                v.push_back(i);
                v.push_back(sum/i);
            }
        }
        int min=10000000;
        sort(a,a+26,greater<int>());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<26&&sum/v[i]>26)
            continue;
            int c=0;
            for(int j=0;j<sum/v[i];j++)
            {
            if(a[j]>v[i])
            {
                continue;
            }
            else
            {
                c+=abs(v[i]-a[j]);
            }
        }
        if(c<min)
        min=c;
    }
    cout<<min<<endl;
}
return 0;
}
