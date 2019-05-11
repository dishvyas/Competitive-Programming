#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,sum;
    int a[26];
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<26;i++)
        a[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>s;
            for(j=0;j<s.length();j++)
            {
                int b=s[j];
                b=b-97;
                if(a[b]==i)
                    b[a]++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(a[i]==n)
                sum++;
        }
        cout<<sum<<endl;
    }
}