#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cout << setiosflags(ios::fixed);
	while (1)
	{
		cin >> n;
		if (n == -1)
			break;
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		if (a+b-c<d)
			cout<< setprecision(2)<<(a+b-c)<<endl;
		else
			cout<<"Credit Limit Exceeded."<<endl;
		              
	
	}
	return 0;
}



