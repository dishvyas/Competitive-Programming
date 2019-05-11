#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,j;
    string s,r="";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    r=s;
    sort(s.begin(),s.end());
    if(s==r)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<2<<" "<<n-1<<endl;
    }
    return 0;
}