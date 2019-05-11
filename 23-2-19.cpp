#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,a,b,i;
    cin>>q;
    while(q--)
    {
        cin>>n>>a>>b;
        long long int d=0,e=0;
        long long int c=0,r=0;
        if(a>b)
        {
            c=2;
            e=b;
        }
        else if(b>a)
        {
            c=1;
            e=a;
        }
        else
        {
            c=2;
            e=b;
        }
        r=(n/c);
        d+=e*r;
        n-=d;
        long long int re=n%c;
        while(abs(re)!=0)
        {
            if(c==1)
            {
                c=2;
                e=b;
            }
            else
            {
                c=1;
                e=a;
            }
            r=n/c;
            d+=e*r;
            n-=d;
        }        
        cout<<d<<re<<endl;
    }
    return 0;
}