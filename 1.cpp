#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p1[100000],p2[100000],k[100000];
    int t,n=0,c=0,d=0,i;
    cin>>t;
    n=t;   
    for(i=0;i<n;i++)
    {
        cin>>p1[i]>>p2[i]>>k[i];
    }
    for(i=0;i<n;i++)
        {
            c=p1[i]+p2[i];
            d=c/k[i];
            if(d%2==0)
            {
                cout<<"CHEF"<<endl;
            }
            else{
                cout<<"COOK"<<endl;
            }
        }        
    return 0;
}