import math
import re
arr=[]
n=int(input())
m=int(input())
arr = [ list(map(int, input().split())) for _ in range(6)]
def maxSum(mat):
    a=len(arr)
    b=len(arr[0])
        
    sum=[]
    for i in range(0,a-2):
        for j in range(0,b-2):
            sum[j]=(mat[i][j]+ mat[i][j+1]+mat[i][j+2]) + (mat[i+1][j+1]) + (mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2])

    
    
    print(max(sum))

