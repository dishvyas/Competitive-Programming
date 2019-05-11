#include<bits/stdc++.h>
using namespace std;
int i,j;
void call(vector<int>a,int c,int d)
{
    for(i=0;i<c;i++)
        {
            for(j=i+1;j<c;j++)
            {
                if(a[i]+a[j]==d)
                cout<<i+1<<" "<<j+1<<endl; 
            }
        }
}
int main()
{
    int t,j,n,m,i;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int a;
        cin>>m;
        cin>>n;
        for(i=0;i<n;i++)    
        {
            cin>>a;
            v.push_back(a);
        }
        call(v,n,m);
    }
    return 0;
}