#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s=0,s1=0,i,a=0,b=0,c=0;
    cin>>n>>s;
    // b=s%n;
    // a=s/n;
    // c++;
    // c+=a;
    // cout<<c<<endl;
    b=s/n;
    s1=s-(b*n);
    if(s1==0){
        c=b;
        cout<<c<<endl;}
    else{
        c=b+1;
        cout<<c<<endl;
    }
    //cout<<c<<endl;
}