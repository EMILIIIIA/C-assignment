#include<bits/stdc++.h>
using namespace std;

void fuction(double x)
{
	long double ans = 24;
	for (int i = 1; i <= 10; i++)
	{
		ans = ans * (1 + x);
		cout << i << " " << ans << endl;
	}


}
int main()
{
	cout << fixed << setprecision(2) ;
	for (double i = 0.05; i <= 0.1; i = i + 0.01)
	{
		cout << setprecision(0) << i * 100 << "%" << setprecision(2) << endl;
		fuction(i);
	}

	return 0;
}
