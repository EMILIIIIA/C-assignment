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
	int n=0;
	cin>>n;
	while(n!=0)
	{
		cout<<fuction(n)<<"\n";
		cin>>n;
	}
		
	return 0;
}
