#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int n)
{

    if (n < 0) 
        return 0; 

    if (n <= 1) 
        return 1; 
  
    double digits = 0; 
    
    for (int i=2; i<=n; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
}


long long findDigits(int n) 
{ 
    if (n < 0) 
        return 0; 

    if (n <= 1) 
        return 1; 

    double x = ((n*log10(n/M_E) + log10(2*M_PI*n)/2.0)); 
    return floor(x) + 1; 
} 

int main()
{
    int T;

    cin>>T;
    while(T--)
    {
        int N;

        cin>>N;

        cout<<findDigits(N)<<endl;
    }
    return 0;
}