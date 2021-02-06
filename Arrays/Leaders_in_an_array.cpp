#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector <int> ans;
    int max=INT_MIN;
    
    for(int i=n-1;i>=0;i--)
    {
        if(max<=a[i])
        {
            max=a[i];
            ans.push_back(max);
        }
    }

    int start=0;
    int end=ans.size()-1;
    
    while(start<=end){
        int temp=ans[start];
        ans[start]=ans[end];
        ans[end]=temp;
        
        start++;
        end--;
    }
    return ans;
}

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
        long long n;
        cin >> n;
        int a[n];
  
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
    
        vector<int> v = leaders(a, n);

        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;
   }
}