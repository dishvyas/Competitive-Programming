#include<bits/stdc++.h>
using namespace std;
long long int print2largest(long long int arr[], int arr_size) 
{ 
    long long int i, first, second; 
    first = second = INT_MIN; 
    for (i = 0; i < arr_size ; i ++) 
    { 
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
        else if (arr[i] > second && arr[i] != first) 
            second = arr[i]; 
    }
    if(second==INT_MIN)
        return 0;
    else
        return second;
} 
int main()
{
    long long int i,c=0,e[200005];
    int n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>e[i];    
    sort(e,e+n);
    long long int r=print2largest(e,n);
    cout<<r<<endl;
}