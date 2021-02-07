#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    set<int>s;
    vector<int> res;

    int i = 0, j = 0; 

    while (i < m && j < n) 
    { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else
        { 
            s.insert(arr1[i]);
            i++; 
            j++; 
        } 
    }
    
    if(s.size())
        for(auto p:s)
            res.push_back(p);
    else
        res.push_back(-1);
    
    return res;
}
 

int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 