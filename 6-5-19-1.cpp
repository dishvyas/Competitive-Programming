#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a=0,b=0,f=0;
        vector<long long int> v;
        for(i=1;i<=n;i++)
            v.push_back(i);
        while(f<=n-1)
        {
            long long int c=v.size()/2,l=0;
            sort(v.begin(),v.end(),greater<int>());
            for(l=0;l<c;l++)
            {
                long long int j=0,k=1;
                a=v[j];
                b=v[k];
                v.erase(remove(v.begin(), v.end(), v[j]), v.end());
                v.erase(remove(v.begin(), v.end(), v[k]), v.end());
                v.push_back(a+b+(a*b));
                j+=2;
                k+=2;
                f++;
            }
        }
        cout<<v[0]<<endl;
    }
    return 0;
}