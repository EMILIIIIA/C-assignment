#include<bits/stdc++.h>
using namespace std; 
#include<cmath>
bool isPrime( unsigned int x )
{

  	int flag = 1;
  	int tem = sqrt(x);
  	for (int i = 1; i <= tem; i++) 
  	{
  		if (x % i == 0)
  		{
  			flag++;
  
  			if (i != (int)x / i && x != x/i)
  			flag++	;
  		}
  	}
  	//cout<<flag<<endl;
  	if(flag==2)
  	{
	  	return 1;
	  	
	}
	return 0;
}

int main()
{
	int a;
	cin>>a;
	cout<<isPrime(a);
	
	
	return 0;
}
