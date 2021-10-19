#include<bits/stdc++.h>
using namespace std;

int n = 0;
int main()
{
	cin >> n;
	switch (n)
	{
		case 1:
		{
			int w = 0;
			cout << "Please type the weekly salary.\n";
			cin >> w;
			cout << w;
			break;
		}

		case 2:
		{
			int t = 0, w = 0;
			cout << "Please type the hourly salary and wordking hour.\n";
			cin >> w >> t;
			if (t <= 40)
				cout << w;
			else
				cout << 40 * w + 1.5 * w*(t - 40);
			break;
		}

		case 3:
		{
			int s = 0;
			cout << "Please type the weekly sales.\n";
			cin >> s;
			cout << 250 + 0.057 * s;
			break;

		}

		case 4:
		{
			int s = 0, w = 0;
			cout << "Please type the weekly items and each item's salary.\n";
			cin >> s >> w;
			cout << w*s;
			break;
		}

	}



	return 0;
}
