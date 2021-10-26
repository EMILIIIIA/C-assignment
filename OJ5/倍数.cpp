#include<bits/stdc++.h>
using namespace std;

bool multiple( unsigned int, unsigned int ); // function prototype

int main()
{
	for (int i = 1; i <= 3; i++)
	{
		int a, b;
		cin >> b >> a;
		cout << a << (multiple(a, b) ? " is a multiple of " : " is not a multiple of ") << b << endl;
	}
} // end main

bool multiple( unsigned int a, unsigned int b )
{
	if ((double)a / (double)b != (int)((double)a / (double)b))
		return 0;
	return 1;
} // end function multiple

