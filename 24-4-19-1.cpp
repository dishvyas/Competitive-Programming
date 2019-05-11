#include<bits/stdc++.h>
long long int gcd(long long int a,long long int b)  
 {   
    if (a == 0 || b == 0)  
        return 0;       
    if (a == b)  
        return a;  
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
long long int lcm(long long int a,long long int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
using namespace std;
int main()
{
    long long int i,j,a,b,c=0,d=0,l=0;
    vector<long long int> v,v1,v2;
    cin>>a>>b;
    for(i=1;i<=min(a,b);i++)
    {
        c=a;
        d=b;
        c+=i;
        d+=i;
        l=lcm(c,d);
        v.push_back(i);
        v2.push_back(l);
        v1.push_back(l);
    }
    sort(v2.begin(),v2.end());
    for(i=0;i<=v1.size();i++)
    {
        j=0;
        if(v1[i]==v2[j])
            d=i;
        j++;
    }
    if(b==lcm(a,b)|a==lcm(a,b))
        cout<<0<<endl;
    else
        cout<<d+1<<endl;
    return 0;
}