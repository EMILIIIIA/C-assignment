#include<bits/stdc++.h>
using namespace std;
int n = 0, maxn = -2147483648, tem;
int main()
{
	while (++n <= 10)
	{
		cin >> tem;
		maxn = max(maxn, tem);
	}
	cout << "Largest is " << maxn;
	return 0;
}
