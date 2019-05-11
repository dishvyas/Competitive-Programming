#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    long long int n,j,i,a[100009];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n+1;i++)
        {
            cin>>a[i];
        }
        c=0;
        for(i=1;i<n+1;i++)
        {
            for(j=i+1;j<n+1;j++)
            {
                
                if(a[i]!=a[j]&&c==0)
                {
                    if(a[a[i]]==a[a[j]])
                    {
                        cout<<"Truly Happy"<<endl;
                        c=1;
                        break;
                    }
                }
            }
        }
        if(c==0)
        {
            cout<<"Poor Chef"<<endl;
        }
    }
    return 0;
}