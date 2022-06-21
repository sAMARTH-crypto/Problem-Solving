#include<bits\stdc++.h>
using namespace std;


// Naive Approach

/* this niave approach doesn't work for the bigger values as it will 
throw overflow exception that the number is to large */

int countzeros(int n)
{
	int res = 1;

	for(int i=2; i<=n; i++)
		res = res*i;
	
	int zeros = 0;
	while(res%10 == 0) // till the given num is divisible by 10
	{
		zeros++;
		res = res/10; // drop the counted zeros
	}
	return zeros;
}

// Recursive approach

int recfact(int n)			//make use of stack
{
	//base case
	if(n==0)
		return 1;
	return n*recfact(n-1);
}

int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	cout<<countzeros(x)<<endl;
	cout<<recfact(x);
	return 0;
}