#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1010],d=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    long long int t=INT_MAX,cost=INT_MAX;
    for(i=1;i<=100;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            d=abs(a[j]-i);
            if(d>1)
                sum+=d-1;
        }
            if(sum<cost)    
            {
                cost=sum;
                t=i;
            }
        }
    cout<<t<<" "<<cost<<endl;
    return 0;
}