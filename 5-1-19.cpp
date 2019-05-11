#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
    long long int n,A[200001];
    cin>>t;
    while(t--)
    {
        int c=0,d=0,flag=0;
        cin>>n>>a>>b;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]%a==0)
                c++;
            if(A[i]%b==0)
                d++;
            if(A[i]%b==0&&A[i]%a==0)
                flag=1;
        }
        if(a==b)
        {
            if(flag==1)
                cout<<"BOB"<<endl;
            else
                cout<<"ALICE"<<endl;
        }
        else
        {
            if(c==d)
            {
                if(flag==1)
                    cout<<"BOB"<<endl;
                else
                    cout<<"ALICE"<<endl;
            }
            else if(c>d)
            {
                cout<<"BOB"<<endl;
            }
            else if(d>c)
            {
            cout<<"ALICE"<<endl;
            }
        }
    }
    return 0;
}