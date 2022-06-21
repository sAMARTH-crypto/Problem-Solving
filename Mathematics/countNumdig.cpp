#include<bits\stdc++.h>
using namespace std;

//Naive Approach

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

// Log approach

int CountLog(int x)
{
	return (log10(x)+1);
}

// recursive approach

int countRecursive(int x)
{
	if (x == 0)
		return 0;
	return 1 + countRecursive(x/10);
}


int main()
{

	int a;
	cin>>a;
	cout<<"Num. of digits:"<<CountDigits(a)<<endl;
	cout<<"Num. of digits:"<<CountLog(a)<<endl;
	cout<<"Num. of digits: "<<countRecursive(a);

}