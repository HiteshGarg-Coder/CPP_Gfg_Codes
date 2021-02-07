#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> vec, int K) {

    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==K) return i;
    }
    
    return -1;
}


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}