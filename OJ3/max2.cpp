#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
	for(int i=0;i<10;i++)
		cin>>arr[i];
	sort(arr,arr+10);
	cout <<arr[9]<<" "<<arr[8];
	return 0;
}
