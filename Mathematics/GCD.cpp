#include<bits/stdc++.h>
using namespace std;

// Naive approach
int gcd(int x, int y)
{
	int res = min(x,y); //gcd will not be greater than min of two no's

	while(res>0)
	{
		if (x%res ==0 && y%res == 0)
			break;
		res--;
	}
	return res;
}

// Euclidean Algorithm


int GCD(int x, int y)
{
	if (y == 0)
		return x;
	else
		return GCD(y, x%y);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"GCD: "<<gcd(a,b)<<endl;
	cout<<"GCD: "<<GCD(a,b);
}