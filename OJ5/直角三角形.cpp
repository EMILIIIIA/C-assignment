#include<bits/stdc++.h>
using namespace std;

double hypotenuse( double, double ); 

int main()
{
    for(int i=1;i<=3;i++)
    {
		double a,b;
		cin>>a>>b;
		cout<<fixed << setprecision(1)<<hypotenuse(a,b)<<endl;
	}
} 

double hypotenuse( double s1, double s2 )
{
   return  (sqrt(s1*s1+s2*s2));
} 

