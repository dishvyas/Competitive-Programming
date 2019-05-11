#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,i,j,b[9];
    long long int s[100000];
    vector<long long int> v,d;
    vector<char> v1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
        // v.push_back(a);
    }
    for(i=1;i<=9;i++)
        cin>>b[i];
    for(i=1;i<=v.size();i++)
    {
        d.push_back(b[s[i]]);
    }
    for(i=0;i<d.size();i++)
        cout<<d[i]<<endl;
    return 0;
}