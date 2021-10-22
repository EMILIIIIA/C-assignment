#include<bits/stdc++.h>
using namespace std;
int main()
{
	//O(n^2) yes yes yes O(n^3) no no no!
	for (int i = 1; i <= 500; i++)
		for (int j = i; j <= 500; j++)
			if (i <= 500 && j <= 500 && sqrt(i * i + j * j) <= 500 && (double)sqrt(i * i + j * j) == (int)sqrt(i * i + j * j))
				cout << i << " " << j << " " << sqrt(i * i + j * j) << endl;
	return 0;
}
