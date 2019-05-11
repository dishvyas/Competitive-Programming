#include <iostream>
using namespace std;
int main() {
	long long int t,n;
	cin>>t;
    char c;
    string s;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    cin>>c;
	    long long int sum=0, f=0;
	    for(long long int i=0;i<s.size();i++)
	    {
	        if(s[i]==c)
	        {
	            sum+=(i-f+1)*(s.size()-i);
                f=i+1;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}