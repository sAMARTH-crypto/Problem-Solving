#include <bits/stdc++.h>
using namespace std;


int countSetBit(int n)
{
	int res = 0;

	while(n>0)
	{
		if((n&1) == 1)  /*comparing the bits of the number with last bit of 1
						and removing it after incrementing the result.	*/
			res++;
		n = n>>1;
	}
	return res;
}

int main()
{
	int a;
	cin>>a;
	cout<<countSetBit(a);
	return 0;
}