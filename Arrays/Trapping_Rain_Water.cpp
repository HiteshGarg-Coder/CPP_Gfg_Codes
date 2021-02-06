#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n)
{
    int max_val = arr[0],min_val=arr[n-1];
    int start[n+1],last[n+1];
    
    for(int i=0;i<n;i++)
    {
        max_val = max(max_val,arr[i]);
        min_val = max(min_val,arr[n-i-1]);
        
        start[i] = max_val;
        last[n-i-1] = min_val;
    }
    
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += min(start[i],last[i])-arr[i];
    }
    
    return sum;   
}

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int a[n];
  
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }

        cout << trappingWater(a, n) << endl;
    }
    
    return 0;
}