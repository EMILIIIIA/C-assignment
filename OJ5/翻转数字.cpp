#include<bits/stdc++.h>
using namespace std;

unsigned int reverseDigits(unsigned int n)
{
	int length=0;
	int tem=n;
	while(tem)
	{
		length++;
		tem/=10;
	}
	//cout<<length;
	int ans=0;
	int flag=1;
	for(int i=1;i<length;i++)
		flag*=10;
	while(n)
	{
		ans=ans+(n%10)*flag;
		flag/=10;
		n/=10;
	}
	return ans;
}

int main()
{
	int a;
	cin>>a;
	cout<<reverseDigits(a);
	return 0;
	
}
