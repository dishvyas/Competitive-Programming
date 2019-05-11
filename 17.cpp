#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<long long int> a;
    long long int n,d,e,f,c;
    signed int q=-1;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=0;
        cin>>d>>e;
        for(j=d;j<=e;j++)
        {
            f=j*pow(q,j);
            c+=f;
        }
        cout<<c<<"\n";
    }
    return 0;
}