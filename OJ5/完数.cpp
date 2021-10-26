#include<bits/stdc++.h>
using namespace std;

//you need to add the cmath library to use sqrt
//copy the code between the two comment
#include<cmath>
bool isPerfect(int x)
{
	int a[100];
	int flag = 1;
	int tem = sqrt(x);
	for (int i = 1; i <= tem; i++)
	{
		if (x % i == 0)
		{
			a[flag++] = i;

			if (i != (int)x / i && x != x/i)
				a[flag++] = x / i;			
		}
	}
	int ans = 0;
	for (int i = 1; i <= flag - 1; i++)
	{
		ans += a[i];
	}
	if (ans == x)
		return 1;
	return 0;
}
//end 
int main()
{
	int t;
	cin >> t;
	cout << isPerfect(t);



}
