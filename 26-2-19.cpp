#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,so=0,a[200005],se=0,c=0,e=0,d=0,f=0;
    vector<long long int> v,v1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    // for(i=1;i<=n;i++)
    // {
    //     if(i%2==0)
    //         se+=a[i];
    //     else
    //         so+=a[i];
    // }
    // cout<<se<<" "<<so<<endl;
    for(i=1;i<=n;i++)
    {
        // d=se;
        // f=so;
        e=i;
        v.erase(std::remove(v.begin(), v.end(), v[e]), v.end());
        if(i%2==0)
            d-=a[i];
        else
            f-=a[i];
        cout<<d<<"even"<<" "<<f<<"odd"<<endl;
        if(d==f)
            c++;        
    }
    cout<<c<<endl;
    return 0;
}