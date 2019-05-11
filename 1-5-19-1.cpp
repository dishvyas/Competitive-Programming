#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> m;
    map<char,int>::iterator m_itr;
    for(int i = 0; i < 26; ++i)
    {
        m['a'+i] = i + 1;
    }
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s,s1;
        int a=0,b=0;
        char c;
        cin>>s;
        s1=s;
        for(i=0;i<s1.length();i++)
        {
            j=i+1;
            if(int(s1[i])==(int(s1[j])+1))
            {
                c=s1[i];
                s1[i]=s1[j];
                s1[j]=c;
            }
        }
        for(i=0;i<s1.size();i++)
        cout<<s1<<endl;
    }
    return 0;
}