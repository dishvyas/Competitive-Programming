#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    if(k==1||k==n)
        cout<<3*n<<endl;
    else
        cout<<(3*n)+1<<endl;
    return 0;
}