#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,i,j,sum;
    long long int b[100001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long int> a;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        sum+=1-n;
        cout<<sum<<endl;
    }
    return 0;
}