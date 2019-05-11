#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,t,a,b,c,d;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=0;b=0;c=0;
        for(i=0;i<n;i++)
        {
            cin>>d;
            v.push_back(d);
            if(v[i]==0)
                a++;
            else if(v[i]==1)
                b++;
            else
                c++;     
        }  
        if(a>0)
        {    
            for(i=0;i<a;i++)
                cout<<"0 ";
        }
        if(b>0)
        {
            for(i=0;i<b;i++)
                cout<<"1 ";
        } 
        if(c>0)
        {
            for(i=0;i<c;i++)
                cout<<"2 ";
        }
        cout<<"\n";  
    }
    return 0;
}