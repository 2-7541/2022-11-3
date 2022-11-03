#include<iostream>
using namespace std;
int age(int n)
{
	if(n==1)
		return 10;
	else
		return age(n-1)+2;	
}
int main()
{
	cout<<age(5);
	return 0;
}
