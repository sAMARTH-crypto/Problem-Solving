#include<bits/stdc++.h>

using namespace std;

/*
int lcm(int x, int y)
{
	int res = max(x,y);

	while(true)
	{
		if (res%x == 0 && res%y == 0)
			return res;
		res++;
	}
	return res;
}
*/

int gcd(int x, int y)
{
	int res = min(x,y);

	if (y==0)
		return x;
	return gcd(y, x%y);
}

int LCM(int x, int y)
{
	return (x*y)/gcd(x,y);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"LCM: "<<LCM(a,b);
}