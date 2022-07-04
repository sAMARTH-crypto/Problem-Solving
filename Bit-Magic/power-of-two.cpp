#include <bits/stdc++.h>
using namespace std;

/*To see if a number is power of two or not*/

bool naiveISPOW2(int n)
{
	if (n==0) return false;

	while (n!=1)
	{
		if (n%2!=0) return false;
		n = n/2;
	}
	return true; 
}

bool EFFisPOW2(int n)
{
	return (n!=0)&&((n&(n-1))==0);
}


int main(int argc, char const *argv[])
{
	int a = 7;
	//cin>>a;
	cout<<naiveISPOW2(a);
	cout<<EFFisPOW2(a);
	
	return 0;
}