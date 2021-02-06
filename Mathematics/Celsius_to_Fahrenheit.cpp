#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
   return double(C*1.8)+32;
}

int main()
{
    int T;
    int C,F;
    cin >> T; 
    while(T--){
        cin >> C;
        cout << floor(cToF(C)) << endl;
    }
    return 0;
} 