#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int k=1;
		for(int i=0; i<n; i++)
		{
    		int c = 0;
    		for(int j=0; j<n; j++)
    		{
    			if(a[i][j] == 0)
    			{
        			c = 1;
        			break;
    			}
    		}
    		if(c == 0)
    		{
    			k = 0;
    			break;
			}
		}
    	for(int i=0; i<n; i++)
    	{
    		int c = 0;
    		for(int j=0; j<n; j++)
    		{
        		if(a[j][i] == 0)
        		{
        			c = 1;
        			break;
        		}
    		}
    		if(c == 0)
    		{
        		k = 0;
        		break;
    		}
    	}
		if(k == 1)
    		cout<<"YES"<<"\n";
		else
    		cout<<"NO"<<"\n";
    }    
    return 0;
}