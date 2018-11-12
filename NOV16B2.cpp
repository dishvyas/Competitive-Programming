#include<bits/stdc++.h>
using namespace std;
int Jacobsthal(int n) 
{ 
    if (n == 0) 
        return 0; 
    if (n == 1) 
        return 1; 
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2); 
} 
int main()
{
    int t,a,i;
    long long int x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        x=Jacobsthal(a);
        y=pow(2,a);
        cout<<x<<" "<<y<<" ";
    }
	return 0;
}
