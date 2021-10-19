#include<bits/stdc++.h>
using namespace std;

long double fuction(double x)
{
	long double ans = 24;
	for (int i = 1626; i <= 2013; i++)
		ans = ans * (1 + x);
	return ans;
}
int main()
{
	for(double i=0.05;i<=0.1;i=i+0.01)
		cout<<fuction(i)<<endl;
	return 0;
}
