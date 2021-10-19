#include<bits/stdc++.h>
using namespace std;

long long fuction(long long x)
{
	long long ans=1;
	for(int i=x;i>=1;i--)
		ans = ans * i;
	return ans;
}
int main()
{
	for(long long i=1;i<=7;i++)
		cout<<fuction(i)<<"\t";
	return 0;
}
