#include<bits/stdc++.h>
using namespace std;


int main()
{
	//cout<<"bin\t\tdec\toct\thex\t"<<endl;
	for(int i=1;i<=256;i++)
		cout<<dec<<i<<" "<<bitset<9>(i)<<" "<<oct<<i<<" "<<hex<<i<<endl;
	return 0;
}
