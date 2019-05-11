#include<bits/stdc++.h>
using namespace std;
long int findFirstAndLast(vector<long int> arr,long int m,long int x) 
{ 
    long int first = -1, last = -1; 
    for (int i=0; i<m; i++) 
    { 
        if (x != arr[i]) 
            continue; 
        if (first == -1) 
            first = i; 
        last = i; 
    } 
    return last;
} 
int main()
{
    long int d,n,k=0,k1=0,i=0,a=0,b=0,c=0;
    vector<long int> v;    
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>d;
        v.push_back(d);
        // if(d==1)
        //     c++;
        // else if(d==0)
        //     b++;
    }
    a=findFirstAndLast(v,n,1);
    b=findFirstAndLast(v,n,0);
    cout<<min(a+1,b+1)<<endl;
    // cout<<c<<b<<endl;
    // for(i=1;i<=n;i++)
    // {
    //     if(c>0||b>0)
    //     {
    //         if(v[i]==1)
    //         {
    //             c--;
    //             k=i;
    //             // cout<<c <<k <<b<<endl;
    //         }
    //         else if(v[i]==0)
    //         {
    //             b--;
    //             k1=i;
    //             // cout<<b<<k1<<endl;
    //         }
    //     }    
    //     else
    //     {
    //         break;
    //     }    
    // }
    // // cout<<k<<k1<<endl;
    // cout<<min(k,k1)<<endl;
    return 0;
}