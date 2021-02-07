#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{

   int i =0;
   while(arr[i] < arr[i+1] && i+1<n) i++;
   
   if(i==n) return -1;

   return i;
  
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		cout<<peakElement(tmp,n)<<endl;		
	}

	return 0;
}