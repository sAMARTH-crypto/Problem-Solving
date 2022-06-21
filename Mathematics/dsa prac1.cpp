#include<bits\stdc++.h>
using namespace std;

int CountDigits(int x)
{
	int count = 0;

	while(x>0)
	{
		x = x/10;
		count++;
	}
	return count;
}

int main()
{

	int a;
	cin>>a;
	cout<<"Num. of digits: "<<CountDigits(a);

}