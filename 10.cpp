#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
	while(t--)
	{
	    long long int den,num=0;
	    cin>>n;
	    den=pow(2,n);
	    for(int i=n-1;i>=0;i--)
	    {
	        if(n%2==0)
	        {
	            if(i%2==0)
	            {
	            	num-=pow(2,i);
			cout<<num<<" "<<i<<"1"<<endl;
	            }
	            else{
			 num+=pow(2,i);
			cout<<num<<" "<<i<<"2"<<endl;			
}	        
}
	        else
	        {
	            if(i%2==0)
	            {
		   	
	            num+=pow(2,i);
		    cout<<num<<" "<<i<<"3"<<endl;		           
 }
	            else{ num-=pow(2,i);
cout<<num<<" "<<i<<4<<endl;
}	        
}
	    }
	    cout<<num<<" "<<den<<" ";
	}
	return 0;
}