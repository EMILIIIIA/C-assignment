#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;


int n;
int arr[5];
void fuction(int x)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = x % 10;
		x = x / 10;
	}
	return;
}

int main()
{
	cin >> n;
	while (n != 0)
	{
		fuction(n);
		if (arr[0] == arr[4] && arr[1] == arr[3])
			cout << n << " is a palindrome." << endl;
		else
			cout << n << " is not a palindrome." << endl;
		cin >> n;
	}
	return 0;
}
