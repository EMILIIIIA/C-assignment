#include<bits/stdc++.h>
using namespace std;


double fuction(int n, int m)
{
	switch (n)
	{
		case 1:
		{
			return m;
			break;
		}

		case 2:
		{
			int t = 0;
			cin >> t;
			if (t <= 40)
				return  m * t;
			else
				return 40 * m + 1.5 * m * (t - 40);
			break;
		}

		case 3:
		{
			return (double)(250 + 0.057 * m);
			break;

		}

		case 4:
		{
			int s = 0;
			
			cin >> s;
			return m*s;
			break;
		}
	}
}
int main()
{
	int n = 0, m = 0;
	cin >> n;
	while (n != -1)
	{
		cin >> m;
		cout << fixed << setprecision(2) << fuction(n, m)<<endl;
		cin >> n;
	}
	return 0;
}
