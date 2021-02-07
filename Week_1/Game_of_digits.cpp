#include<bits/stdc++.h>
using namespace std;

string smallestK(long long n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long n;
        cin>>n;
        cout<< smallestK(n) << endl;
	}
	return 1;
}

long long int smallestKest(long long int n)
{
    if (n >= 0 && n <= 9)
        return n;
    stack<long long int> digits;
    for (long long int i = 9; i >= 2 && n > 1; i--)
    {
        while (n % i == 0)
        {
            digits.push(i);
            n = n / i;
        }
    }

    if (n != 1)
        return -1;
    long long int k = 0;
    while (!digits.empty())
    {
        k = k * 10 + digits.top();
        digits.pop();
    }

    return k;
}


string smallestK(long long int n){
    cout<<smallestKest(n);
    return "";
}