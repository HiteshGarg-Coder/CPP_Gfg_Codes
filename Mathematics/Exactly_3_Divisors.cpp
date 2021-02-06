#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int exactly3Divisors(int n)
{
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(isPrime(i))
        {
            if(i*i<=n) {count++;}
        }
    }
    return count;
}

int main()
 {
    int T;
    
    cin>>T;
    while(T--)
    {
        int N;
        
        cin>>N;
        
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}