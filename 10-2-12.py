def check(a,b): 
    n = len(a) 
    m = len(b) 
    y=[]
    dp=([[0 for i in range(m+1)] 
       for i in range(n+1)]) 
    dp[0][0] = 1
    for i in range(len(s1)): 
        for j in range(len(s2)+1): 
            if (dp[i][j]):
                if ((j < len(s2) and 
                   (s1[i]== s2[j]))): 
                    dp[i + 1][j + 1] = 1
                elif (s1[i]!=s2[j]):
                    y[i]=s1[i]
    return y 

    # for i in range(len(s1)): 
    #     for j in range(len(s2)+1): 
    #         if (i == 0):
    #             if (a[j] == b[i] and j == 0):
    #                 dp[i][j] = 1 
    #             elif (a[j] == b[i]):
    #                 dp[i][j] = dp[i][j - 1] + 1 
    #             else:
    #                 dp[i][j] = dp[i][j - 1]
            
    #         else:
    #             if (a[j] == b[i]): 
    #                 dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1]
    #             else:
    #                 dp[i][j] = dp[i][j - 1]
    # return dp[m][n]
            
t=int(input())
for i in range(t):
    s1=str(input())
    s2=str(input())
    count=check(s1,s2)
    print(count) 
