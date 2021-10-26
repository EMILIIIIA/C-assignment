#include<bits/stdc++.h>
using namespace std;


const char* generateDivision(int avgMark)
{
	if (avgMark >= 60)
		return "First";
	if (avgMark >= 45)
		return "Second";
	if (avgMark >= 35)
		return "Third";
	else
		return "Fail";
}
int main()
{
	int a;
	cin>>a;
	cout<<generateDivision(a);



	return 0;
}
