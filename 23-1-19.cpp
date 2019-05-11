#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i;
    long long int l1[501],r1[501],l2[501],r2[501];
    cin>>q;
    for(i=0;i<q;i++)
        cin>>l1[i]>>r1[i]>>l2[i]>>r2[i];
    for(i=0;i<q;i++)
    {
        long long int a=0,b=0,c=0,d=0;
        //a=r1[i]-l1[i];
        //b=r2[i]-l2[i];
        if(l1[i]!=l2[i]&&r1[i]!=r2[i])
        {   
            c=l1[i]; 
            d=l2[i];
        }
        else if(l1[i]!=l2[i]&&r1[i]==r2[i])
        {    
            c=l1[i]; 
            d=l2[i];
        }
        else if(l1[i]==l2[i]&&r1[i]!=r2[i])
        {    
            c=r1[i]; 
            d=r2[i];
        }
        else if(l1[i]==l1[i]&&r1[i]==r2[i])
        {   
            c=l1[i]; 
            d=r2[i];
        }
        cout<<c<<" "<<d<<endl;
    }
    return 0;
}