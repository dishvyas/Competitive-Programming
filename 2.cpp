#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,y=0,m=0,b;
    long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n--;
        long x,p;
		x=n%26;
		p=pow(2,n/26);
		if(x<2)
		  cout<<p<<" "<<"0"<<" "<<"0"<<"\n";
		else if(x<10)
		   cout<<"0"<<" "<<p<<" "<<"0"<<"\n";
		else if(x<26)
		   cout<<"0"<<" "<<"0"<<" "<<p<<"\n";
    }
    return 0;
}
