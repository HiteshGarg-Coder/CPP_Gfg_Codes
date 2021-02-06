#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int curr_sum=0,max_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum += arr[i];
        
        max_sum = max(curr_sum,max_sum);
        
        if(curr_sum <0) curr_sum = 0;
    }
    
    return max_sum;
    
}

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n;         
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        
        cout << maxSubarraySum(a, n) << endl;
    }
}