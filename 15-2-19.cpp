#include<bits/stdc++.h>
using namespace std;
long long int calc(vector<int> q)
{
    long long int ans = 0;
    for (long long int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max((0), q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    return ans;
}
int main()
{
    long long int t,n,i,j,a[100001];
    vector<long long int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int swap=0,c=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        // swap=intminimumSwaps(a,n);
        for(i=1;i<=n;i++)
            cout<<a[i]<<endl;
        for(i=1;i<=n;i++)
        {
            if(abs(a[i]-i)>2)
                c++;
        }
        if(c>0)
            cout<<"Too chaotic"<<endl;
        else
            cout<<swap<<endl;
    }
    return 0;
}