/*
#include <bits/stdc++.h>
using namespace std;

// members of sturcture are by default public
	
struct book 
{

	int bookid;					// instance members of structure (public)
	char title[10];	
	float price;


int input()						// instance member function
{
	
	cin>>bookid>>title>>price;  
	
}

int display()      				// instance member function
{
	cout<<bookid<<" "<<title<<" "<<price;
}

};

int display(book);
book input();	

int main()
{
	book b1; 				 // can make use of struct key word before book 
	b1.input();
	b1.display();		 	//but it's optional in c++
}
*/

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
	cout<<"Num. of digits"<<CountDigits(a);

}


