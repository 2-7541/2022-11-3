#include<iostream>
using namespace std;
int peach(int n)
{
	if(n==1)
		return 1;
	else
		return (peach(n-1)+1)*2;
}
int main()
{
	cout<<peach(6);
	return 0;
} 
