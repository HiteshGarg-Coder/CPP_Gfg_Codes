#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int k)
{
    int curr = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == k) continue;
        else{
            int temp = curr;
            curr = max(curr,min(arr[i],k));
            if(curr == k)
            {
                curr = temp;
            }
        }
    }
    
    return curr;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	
        	cout << immediateSmaller(arr, n, x) << endl;
	}
    
	return 0;
}