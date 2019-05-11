#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,s;
    cin>>t;
    while(t--) 
    {
        cin>>n>>s;
        long long dp[n][s+1];
        memset(dp,INT_MAX,sizeof(dp));
        for(int i=0;i<s;i++) 
        {
            cin>>dp[0][i+1];
            if(dp[0][i+1] == -1)
                dp[0][i+1] = INT_MAX;
        }
        for(int i=1;i<n;i++) 
        {
            for(int j=1;j<=s;j++) 
            {
                dp[i][j] = dp[i-1][j];
                for(int k=1;k<j;k++) {
                    dp[i][j] = min(dp[i][j],dp[0][k]+dp[i-1][j-k]);
                }
            }
        }
        if(dp[n-1][s] == INT_MAX)
            cout<<-1<<endl;
        else
            cout<<dp[n-1][s]<<endl;
    }
}