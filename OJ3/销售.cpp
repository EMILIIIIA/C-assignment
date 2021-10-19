#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cout << setiosflags(ios::fixed);
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
	cout << setprecision(2)<<"Salary is: $"<<(n*0.09+200)<<endl;
	}
	
	
	
	return 0;
}



