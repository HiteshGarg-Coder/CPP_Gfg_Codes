#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y)
{
    int cntx=0,cnty=0;
 
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x) cntx++;
        if(arr[i] == y) cnty++;
    }
    
    if(cntx>cnty) return x;
    else if(cntx<cnty) return y;
    else return min(x,y);
}

int main() {
    
    int t; 
    cin>>t; 

    while(t--) 
    {
        int n; 
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int x,y; 
        cin>>x>>y; 
        cout << majorityWins(arr,n,x,y) << endl; 
        
    }
    
	return 0;
}  