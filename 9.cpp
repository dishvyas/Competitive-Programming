#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
        if (arr[mid] == x)   
            return mid; 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1; 
} 
int main()
{
    int t,c;
    long long int n,j,i,a[100009];
    vector<long long int, long long int> b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n+1;i++)
        {
            cin>>a[i];
        }
        c=0;
        for(i=1;i<n+1;i++)
        {

            // j=i+1;
            // if(a[i]!=a[j]&&c==0)
            //     {
            //         if(a[a[i]]==a[a[j]])
            //         {
            //             cout<<"Truly Happy"<<endl;
            //             c=1;
            //             break;
            //         }
            //     }
        }
        if(c==0)
        {
            cout<<"Poor Chef"<<endl;
        }
    }
    return 0;
}