#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rearrange(vector<int>& arr, int n)
    {

        for (int i=0; i < n; i++)
            arr[i] += (arr[arr[i]]%n)*n;

        for (int i=0; i<n; i++)
            arr[i] /= n;

    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> array(n);
        for(int i = 0 ;i<n;i++)
        {
            cin>>array[i];
        }
        
        Solution ob;
        ob.rearrange(array,n);
        
        for(int i = 0 ;i<n;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<"\n";
    }
}