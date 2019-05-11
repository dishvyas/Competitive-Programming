#include<bits/stdc++.h>
using namespace std;
int minimumSwaps1(int arr()) {
        int currentMin = 1;
        int currentInd = 0;
        int minSwapsCount = 0;
        while (currentMin != arr.size()) {
            for (int i = currentInd; i < arr.size(); i++) {
                if (arr[i] == currentMin) {
                    if (i == currentInd) { 
                        currentInd++;
                        currentMin++;
                        break;
                    }
                    swap(arr, i, currentInd);
                    minSwapsCount++;
                    currentInd++;
                    currentMin++;
                }
            }
        }
        return minSwapsCount;
    }
int main()
{
    long long int i,n,t,a[100001],j;
    vector<long long int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int sum=0,c=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            j=i+1;
            long long temp=0;
            if(abs(a[i]-i)!=0&&abs(a[i]-i)<=2)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                sum++;
            }    
            else if(abs(a[i]-i)>2)
                c++;
        } 
        if(c>0)
            cout<<"Too chaotic"<<endl;
        else if(c==0)
            cout<<sum<<endl;  
    }
    return 0;
}
