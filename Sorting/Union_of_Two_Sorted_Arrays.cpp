#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    map<int,int> res;
    
    for(int i=0;i<n;i++)
    {
        res[arr1[i]] = 1;
    }
    
    for(int i=0;i<m;i++)
    {
        res[arr2[i]] = 1;
    }
    
    vector<int> ans;
    
    for(auto p:res){
        ans.push_back(p.first);
    }
    
    return ans;
}

int main() {
	
	int T;
	cin >> T;
	
	while(T--){

	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);

	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
} 