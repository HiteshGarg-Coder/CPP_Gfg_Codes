#include <bits/stdc++.h> 
using namespace std; 

int ValidPair(int* array, int n) 
{ 
    sort(array, array + n);
    int ans = 0;
    
    for (int i = 0; i < n; ++i) {

        if (array[i] <= 0)
            continue;

        int j = lower_bound(array, array + n, -array[i] + 1) - array;
        ans += i - j;
    }
    return ans;
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		cout<<ValidPair(array,n)<<endl;
	}
	return 0; 
} 