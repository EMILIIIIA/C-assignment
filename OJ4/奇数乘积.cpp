#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	long long ans=1;
	for(int i=n;i<=m;i++)
		if(i%2==1)
			ans*=i;
	cout<<ans;
	return 0;
}
