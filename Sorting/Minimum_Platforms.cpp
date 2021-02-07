#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{

    int platform[2361] = {0};
    int requiredPlatform = 1;
    for (int i = 0; i < n; i++) {

        ++platform[arr[i]]; 
        --platform[dep[i] + 1];
    }

    for (int i = 1; i < 2361; i++) {

        platform[i] = platform[i] + platform[i - 1]; 
        requiredPlatform = max(requiredPlatform, platform[i]);
    }
    return requiredPlatform;
}


int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
} 