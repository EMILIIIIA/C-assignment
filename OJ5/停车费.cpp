#include <bits/stdc++.h>
using namespace std;

double a, b, c;

double fuction(double x)
{
	//cout<<(x!=(int)(x/1))<<endl;
	if (x <= 3.0)
		return 2;
	if (x >= 19.0)
		return 10;
	if (x != (int)(x / 1))
	{
		//cout<<"1"<<endl;
		return 2 + ((int)(x) - 2) * 0.5;
	}
	//cout<<"2"<<endl;
	return 2 + ((int)(x) - 3) * 0.5;
}
int main()
{
	cin >> a;
	cout << fixed << setprecision(1) << a << " " << fixed << setprecision(2) << fuction(a) << endl;
	cin >> b;
	cout << fixed << setprecision(1) << b << " " << fixed << setprecision(2) << fuction(b) << endl;
	cin >> c;
	cout << fixed << setprecision(1) << c << " " << fixed << setprecision(2) << fuction(c) << endl;
	cout << fixed << setprecision(1) << a + b + c << " " << fixed << setprecision(2) << fuction(a) + fuction(b) + fuction(c) << endl;
	return 0;
}
