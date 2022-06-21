#include<bits/stdc++.h>
using namespace std;


bool KthBitLShift(int n, int k)  /*This function is shifting the binary of "1"
								to 3rd index from right and comparing it to
								the 3rd bit of the number using "AND" 
										and	return true.*/
{
	if(n&(1<<(k-1)!=0))    
		return true;
	else 
		return false;
}


bool KthBitRShift(int n, int k)
{
	if((n>>(k-1)&1)==1)   /*This function is making use of the 
							right shift and shifting the k-1th bit of the
								number to the right and comparing it to the 
								last bit of  "1" using "AND" and 
								returning true.*/
		return true;
	else 
		return false;
}


int main()
{
	int x, y;
	cin>>x>>y;
	cout<<KthBitLShift(x,y)<<endl;
	cout<<KthBitRShift(x,y);
}