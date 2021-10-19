#include<bits/stdc++.h>
using namespace std;


int main()
{
	cout<<"bin\t\tdec\toct\thex\t"<<endl;
	for(int i=1;i<=256;i++)
		cout<<bitset<8>(i)<<"\t"<<dec<<i<<"\t"<<oct<<i<<"\t"<<hex<<i<<"\t"<<endl;
	return 0;
}
