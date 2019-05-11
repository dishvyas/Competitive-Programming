#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,a=0,b=0,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        if((x+z-y)==0||(x+y-z)==0||(y+z-x)==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
