#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}


int findMedian(int ar1[], int n, int ar2[], int m){
    // code here
    int i = 0; 
    int j = 0;
    int count; 
    int m1 = -1, m2 = -1; 
    
    if((m + n) % 2 == 1) 
    { 
        for (count = 0; count <= (n + m)/2; count++)
        { 
            if(i != n && j != m)
            { 
                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++]; 
            } 
            else if(i < n)
            { 
                m1 = ar1[i++]; 
            } 
            else
            { 
                m1 = ar2[j++]; 
            } 
        } 
        return m1; 
    } 
    else
    { 
        for (count = 0; count <= (n + m)/2; count++) 
        { 
            m2 = m1; 
            if(i != n && j != m)
            { 
                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++]; 
            } 
            else if(i < n)
            { 
                m1 = ar1[i++]; 
            } 
            else
            { 
                m1 = ar2[j++]; 
            } 
        } 
        return (m1 + m2)/2; 
    } 
}