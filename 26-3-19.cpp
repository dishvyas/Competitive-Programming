#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dp[2001][2001];
int w[2001];
int main() 
{
    int tt,n,k;
    scanf("%d",&tt);
    while (tt--)
    {
        scanf("%d %d",&n,&k);
        for (int i=1;i<=n;i++)
            scanf("%d",&w[i]);
        for (int i=0;i<=2000;i++)
            dp[0][i] = dp[i][0] = 0;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=k;j++)
                if (j >= w[i])
                    dp[i][j] = max(dp[i-1][j], dp[i][j-w[i]] + w[i]);
                else
                    dp[i][j] = dp[i-1][j];
        if(dp[n][k]==0)
            printf("-1\n");
        else
            printf("%d\n",dp[n][k]);
    }
    return 0;
}