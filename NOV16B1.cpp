#include <iostream>
using namespace std;

int main() 
{
    int t,i;
    long long int a,b,d=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            d=a-b;
            cout<<"YES"<<endl;
        }
        else if(b>a)
        {
            d=b-a;
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }    
	return 0;
}
