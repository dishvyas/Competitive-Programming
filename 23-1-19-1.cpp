#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a[200],n,i,c=0,d=0,e=0;
    vector<long long int> v,b;
    set<long int> s;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    c=a[n-1];
    for(i=0;i<n;i++)
    {
        if(count(a,a+n,a[i])>1)
            s.insert(a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(c%a[i]!=0)
            s.insert(a[i]);
    }
    set<long int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
      v.push_back(*it);
    }
    sort(v.begin(),v.end());
    d=v.back();
    cout<<c<<" "<<d<<"\n";
    //     v.push_back(count(a,a+n,a[i]));
    // for(i=0;i<n;i++)
    // {
    //     if(c%a[i]==0&&v[i]<2||c%a[i]!=0)
    //     {
    //         b.push_back(a[i]);
    //     }
    // }
    // sort(b.begin(),b.end());
    // d=b.back();
    return 0;
}