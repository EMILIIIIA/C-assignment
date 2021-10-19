#include<iostream>
#include<cstdio>
using namespace std;
long long ans =1;
int main()
{
	for(long long i=1;i<=15;i++)
		ans*=i;
	cout<<ans;
	return 0;
}
