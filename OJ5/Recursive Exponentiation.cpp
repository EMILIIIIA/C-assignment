#include<bits/stdc++.h>
using namespace std;

unsigned long power(unsigned long base, unsigned long exponent)
{
	return exponent>1?base*power(base,exponent-1):base;
}


int main()
{
	return 0;
}
