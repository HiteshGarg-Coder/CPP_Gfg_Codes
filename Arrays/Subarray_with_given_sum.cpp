#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int sum){
   
    int curr_sum = arr[0], start = 0, i; 
    vector<int> res;
    for (i = 1; i <= n; i++) { 
        
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        if (curr_sum == sum) { 
            res.push_back(start+1);
            res.push_back(i);
            return res;
        } 

        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 

    res.push_back(-1);
    return res; 
    
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        long long s;
        
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}