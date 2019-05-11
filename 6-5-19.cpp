#include<bits/stdc++.h>
using namespace std;
long int i,j;
vector<long int> add(vector<long int> s,long int size)
{
    long int a=0,b=0;
    sort(s.begin(),s.end(),greater<int>());
    for(i=1;i<=size;i++)
    {
        j=i+1;
        if(j<=size)
        {   
            a=s[i];
            b=s[j];
            s[i]=INT_MAX;
            s.pop_back();
            s[j]=INT_MAX;
            s.pop_back();
            s.push_back(a+b+(a*b));
        }
        else
        {
            a=s[i];
            s[i]=INT_MAX;
            s.pop_back();
            s.push_back(a);
        }
    }
    return s;
}
int main()
{
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long int> v,f;
        long int b=0,a=0;
        for(i=1;i<=n;i++)
            v.push_back(i);
        for(long int k=0;k<n-1;k++)    
        {
            for(i=1;i<=n;i++)
            {      
                sort(v.begin(),v.end(),greater<int>());
                j=i+1;
                if(j<=n)
                {      
                    a=v[i];
                    b=v[j];
                    v[i]=INT_MAX;
                    sort(v.begin(),v.end());
                    v.pop_back();
                    v[j]=INT_MAX;
                    sort(v.begin(),v.end());
                    v.pop_back();
                    cout<<a+b+(a*b)<<" "<<a<<b<<endl;
                    v.push_back(a+b+(a*b));
                }
                else
                {
                    a=v[i];
                    v[i]=INT_MAX;
                    sort(v.begin(),v.end());
                    v.pop_back();
                    v.push_back(a);
                }
            }
        }
        if(n==1)
            cout<<1<<endl;
        else
        {
            for(i=1;i<=v.size();i++)
                cout<<v[i]<<endl;
        }
    }
    return 0;
}