#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c=1;
    cin>>t;
    while(t--)
    {
        string s,s2="";
        cin>>s;
        int j=0;
        for(i=0;i<s.length();i++)
        {
            char g=48;
            if(s[i]==52)
            {
                s[i]=51;
                char h=49;
                s2+=h;
                j=1;
            }
            else if(j==1)
            {
                s2+=g;
            }
        }
        cout<<"Case #"<<c<<":"<<" "<<s<<" "<<s2<<endl;
        c++;
    }
    return 0;
}