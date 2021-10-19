#include<bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
	cout << setiosflags(ios::fixed);
	while (1)
	{
		cin >> n;
		if (n != -1)
			cin >> m;
		else
			break;

		if (n <= 40)
			cout << setprecision(2)<<(double) n*m << endl;
		else
			cout << setprecision(2) << (double)(40 * m + (n - 40)*m * 1.5) << endl;
	}

	return 0;
}
