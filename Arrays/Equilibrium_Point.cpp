#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n) {

    if(n==1) return 1;
    
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    
    long long leftsum = a[0];
    sum -= a[0];
    
    for(int i=1;i<n;i++)
    {
        sum -= a[i];
        
        if(leftsum == sum) return i+1;
        
        leftsum += a[i];
    }
    
    return -1;
}


int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;

        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}