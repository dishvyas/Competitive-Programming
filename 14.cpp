#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> r;
    int i,j,n,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        vector<int> s;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            s.push_back(a);
        }
        r.push_back(s);
    }    
    
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<r[i][j];
    //     }
    // }
    return 0;
}