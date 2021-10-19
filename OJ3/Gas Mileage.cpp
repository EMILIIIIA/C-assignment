#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;
int sumn = 0, summ = 0;
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	while (n != -1)
	{

		sumn += n;
		summ += m;
		cout << setiosflags(ios::fixed);
		cout << setprecision(6) << (double)((double)n / (double)m) << " " << (double)((double)sumn / (double)summ) << endl;
		cin >> n;
		if (n != -1)cin >> m;
	}

	return 0;
}
