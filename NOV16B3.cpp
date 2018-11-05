#include <iostream>
using namespace std;

int main() 
{
    int t,n,i,j,a[100009],c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]!=a[j+1]&&c==0)
                {
                    if(a[a[i]]=!a[a[j+1]])
                    {
                        continue;
                    }
                    else
                    {
                        c=1;
                        cout<<"Truly Happy"<<endl;
                        break;
                    }
                }
                else if(a[i]!=a[j+1]&&c==0)
                {
                    continue;    
                }
            }
        }
        if(c==0)
        {
            cout<<"Poor Chef"<<endl;
        }
    }
	return 0;
}
