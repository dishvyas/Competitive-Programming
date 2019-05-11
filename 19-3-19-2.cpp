#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,k=0,i,a=-1,b=0,c=0;
    cin>>n>>m;
    k=m/n;
    if(m%n==0)
    {
        a=0;
        while(k%2==0)
        {
            k/=2;
            a++;
        }
        while(k%3==0)
        {
            k/=3;
            a++;
        }
        if(k!=1)
            a=-1;
    }
    cout<<a<<endl;
    return 0;
}