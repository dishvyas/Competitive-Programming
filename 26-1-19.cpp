#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,count;
    char s[1000006];
    cin>>t;
    while(t--)
    {   
        cin>>n;
        count=0;
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='0'&&s[i+1]=='0')
                {
                    count++;
                    s[i]='1';
                }
            }
            else if(i<n-1)
            {
                if(s[i-1]=='0'&&s[i]=='0'&&s[i+1]=='0')
                {
                    count++;
                    s[i]='1';
                }
            }
            else if(i==n-1)
            {
                if(s[i-1]=='0'&&s[i]=='0')           
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
