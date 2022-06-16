#include <bits\stdc++.h>
using namespace std;

/*Efficient solution that does not have overflow issues*/


int countZeros(int n)
{
	int res = 0;

	for(int i=5; i<=n; i=i*5)
	{
		res = res + n/i;
	}

	return res;

}

int main()
{
	int a;
	cin>>a;
	cout<<countZeros(a)<<endl;

}