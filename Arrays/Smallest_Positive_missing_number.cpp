#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) 
{ 
    sort(arr,arr+n);
  
    int i=0,j=1;    
    while(i<n)
    {
        while(arr[i]<j) i++;
        
        if(arr[i] == j)
        {
            i++;
            j++;
        }
        
        if(arr[i]>j) return j;
    }
    
    return n+1;
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
} 