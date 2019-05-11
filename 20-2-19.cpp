#include<bits/stdc++.h>
using namespace std;
int hashFunc(char c)
{
    return (c - 'a');
}
vector <int> countFre(string S)
{
    vector<int> v;
    int Frequency[26];
    for(int i=0;i<26;i++)   
        Frequency[i]=0;
    for(int i = 0;i < S.length();++i)
    {
        int index = hashFunc(S[i]);
        Frequency[index]++;
        v.push_back(Frequency[index]);
    }
    return v;
}

int main()
{
    int p,i,j;
    cin>>p;
    while(p--)
    {
        string s1,s2;
        int c=0;
        cin>>s1>>s2;
        vector <int> s=countFre(s1);
        vector <int> t=countFre(s2);
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=1&&t[i]>=1)
            {
                c=1;
                cout<<s[i]<<t[i]<<i<<endl;
                cout<<"YES"<<endl;
                break;
            }
            else
                continue;
            
        }     
        if(c==0)
            cout<<"NO"<<endl;  
    }
    return 0;
}