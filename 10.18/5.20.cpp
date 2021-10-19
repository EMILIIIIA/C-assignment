#include<bits/stdc++.h>
using namespace std;
int ans=0;
int main()
{
	//O(n^2) yes yes yes O(n^3) no no no!
	for(int i=1;i<=500;i++)for(int j=i;j>=1;j--)if(i<=500 && j<=500 && sqrt(i*i+j*j)<=500 && (double)sqrt(i*i+j*j)==(int)sqrt(i*i+j*j))ans++,cout<<j<<" "<<i<<" "<<sqrt(i*i+j*j)<<endl;
	cout<<"Ò»¹²ÓÐ£º"<<ans;
	return 0;
}
