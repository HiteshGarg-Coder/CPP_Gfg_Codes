#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n) {
    
        if((n == 1) && (arr[0] == 1)) return 0;
        if((n == 1) && (arr[0] == 0)) return -1;
        
        int i=0;
        while(arr[i] == arr[i+1] && i<n) i++;
        
        if(i==n-1) {
            if(arr[i] == 0) return -1;
            else return 0;
        }
        else return i+1;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}