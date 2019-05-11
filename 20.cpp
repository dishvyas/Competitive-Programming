#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,d;
    signed int c;
    string a,b,z;
    //map<string, int> v={{"saturday",1},{"sunday",2},{"monday",3},{"tuesday",4},{"wednesday",5},{"thursday",6},{"friday",7},{"saturday",8},{"sunday",9}};
    cin>>t;
    map<string, int>::iterator it,iy;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        c=0,d=0;
        map<string, int> v={{"saturday",1},{"sunday",2},{"monday",3},{"tuesday",4},{"wednesday",5},{"thursday",6},{"friday",7},{"saturday",8},{"sunday",9}};
        for(it=v.begin();it!=v.end();it++)
        {
            if(a==it->first)
            {
                for(iy=v.begin();iy!=v.end();iy++)
                {
                    if(b==iy->first)
                    {
                        c=(iy->second-it->second);
                        c=abs(c)+1;                    
                    }
                }
            }
            else
            {
                v.erase(it->first);
                cout<<it->first<<endl;
            }
        }
        if(c>=n)
        {
            d++;
            int e=(m-c)/7;
            d+=e;
        }
        if(d==1)
        {
            cout<<c<<endl;
        }
        else if(d==0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout<<"many"<<endl;
        }
    }
    return 0;
}