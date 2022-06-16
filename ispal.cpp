#include <bits\stdc++.h>
using namespace std;


int isPal(int x) // 0-> false  1-> true
{
	int rev = 0;
	int temp = x;

	while (temp !=0 )
	{
		int ld = temp%10 ;
		rev = rev*10+ld ;
		temp = temp/10 ;
	}

	return (rev == x);
}

int main(int argc, char const *argv[])
{
	int in;
	cin>>in;
	cout<<isPal(in);
	return 0;
}