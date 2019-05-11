#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a,long long int b)
{
    long long int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
	    if(m < n)
	        m=m+a;
	    else
	        n=n+b;
    }
    return m;
}
int main()
{
    long long int k,n,a,b,i;
    int t;
    cin>>t;
    while(t--)
    {
        long long int c=0,d=0,e=0,f=0;
        cin>>n>>a>>b>>k;
        c=n/a;
        d=n/b;
        e=lcm(a,b);
        f=2*(n/e);
        if((c+d-f)>=k)  
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
     
    }
    return 0;
}